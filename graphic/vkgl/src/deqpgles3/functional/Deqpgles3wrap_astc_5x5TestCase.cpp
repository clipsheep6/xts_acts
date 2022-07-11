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

#define VkglTestCase_022951_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_022951_2 "stc_5x5.clamp_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022951, VkglTestCase_022951_1, VkglTestCase_022951_2);

#define VkglTestCase_022952_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_022952_2 "stc_5x5.clamp_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022952, VkglTestCase_022952_1, VkglTestCase_022952_2);

#define VkglTestCase_022953_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022953_2 "tc_5x5.clamp_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022953, VkglTestCase_022953_1, VkglTestCase_022953_2);

#define VkglTestCase_022954_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_022954_2 "stc_5x5.clamp_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022954, VkglTestCase_022954_1, VkglTestCase_022954_2);

#define VkglTestCase_022955_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022955_2 "tc_5x5.clamp_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022955, VkglTestCase_022955_1, VkglTestCase_022955_2);

#define VkglTestCase_022956_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_022956_2 "stc_5x5.clamp_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022956, VkglTestCase_022956_1, VkglTestCase_022956_2);

#define VkglTestCase_022957_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022957_2 "tc_5x5.repeat_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022957, VkglTestCase_022957_1, VkglTestCase_022957_2);

#define VkglTestCase_022958_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_022958_2 "stc_5x5.repeat_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022958, VkglTestCase_022958_1, VkglTestCase_022958_2);

#define VkglTestCase_022959_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022959_2 "tc_5x5.repeat_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022959, VkglTestCase_022959_1, VkglTestCase_022959_2);

#define VkglTestCase_022960_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022960_2 "tc_5x5.repeat_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022960, VkglTestCase_022960_1, VkglTestCase_022960_2);

#define VkglTestCase_022961_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022961_2 "tc_5x5.repeat_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022961, VkglTestCase_022961_1, VkglTestCase_022961_2);

#define VkglTestCase_022962_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022962_2 "tc_5x5.repeat_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022962, VkglTestCase_022962_1, VkglTestCase_022962_2);

#define VkglTestCase_022963_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022963_2 "tc_5x5.mirror_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022963, VkglTestCase_022963_1, VkglTestCase_022963_2);

#define VkglTestCase_022964_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_022964_2 "stc_5x5.mirror_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022964, VkglTestCase_022964_1, VkglTestCase_022964_2);

#define VkglTestCase_022965_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022965_2 "tc_5x5.mirror_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022965, VkglTestCase_022965_1, VkglTestCase_022965_2);

#define VkglTestCase_022966_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022966_2 "tc_5x5.mirror_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022966, VkglTestCase_022966_1, VkglTestCase_022966_2);

#define VkglTestCase_022967_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022967_2 "tc_5x5.mirror_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022967, VkglTestCase_022967_1, VkglTestCase_022967_2);

#define VkglTestCase_022968_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022968_2 "tc_5x5.mirror_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022968, VkglTestCase_022968_1, VkglTestCase_022968_2);

#define VkglTestCase_022969_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_022969_2 "c_5x5.clamp_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022969, VkglTestCase_022969_1, VkglTestCase_022969_2);

#define VkglTestCase_022970_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_022970_2 "c_5x5.clamp_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022970, VkglTestCase_022970_1, VkglTestCase_022970_2);

#define VkglTestCase_022971_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_022971_2 "_5x5.clamp_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022971, VkglTestCase_022971_1, VkglTestCase_022971_2);

#define VkglTestCase_022972_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_022972_2 "c_5x5.clamp_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022972, VkglTestCase_022972_1, VkglTestCase_022972_2);

#define VkglTestCase_022973_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_022973_2 "_5x5.clamp_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022973, VkglTestCase_022973_1, VkglTestCase_022973_2);

#define VkglTestCase_022974_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_022974_2 "c_5x5.clamp_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022974, VkglTestCase_022974_1, VkglTestCase_022974_2);

#define VkglTestCase_022975_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_022975_2 "_5x5.repeat_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022975, VkglTestCase_022975_1, VkglTestCase_022975_2);

#define VkglTestCase_022976_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_022976_2 "c_5x5.repeat_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022976, VkglTestCase_022976_1, VkglTestCase_022976_2);

#define VkglTestCase_022977_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_022977_2 "_5x5.repeat_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022977, VkglTestCase_022977_1, VkglTestCase_022977_2);

#define VkglTestCase_022978_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_022978_2 "_5x5.repeat_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022978, VkglTestCase_022978_1, VkglTestCase_022978_2);

#define VkglTestCase_022979_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_022979_2 "_5x5.repeat_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022979, VkglTestCase_022979_1, VkglTestCase_022979_2);

#define VkglTestCase_022980_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_022980_2 "_5x5.repeat_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022980, VkglTestCase_022980_1, VkglTestCase_022980_2);

#define VkglTestCase_022981_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_022981_2 "_5x5.mirror_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022981, VkglTestCase_022981_1, VkglTestCase_022981_2);

#define VkglTestCase_022982_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_022982_2 "c_5x5.mirror_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022982, VkglTestCase_022982_1, VkglTestCase_022982_2);

#define VkglTestCase_022983_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_022983_2 "_5x5.mirror_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022983, VkglTestCase_022983_1, VkglTestCase_022983_2);

#define VkglTestCase_022984_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_022984_2 "_5x5.mirror_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022984, VkglTestCase_022984_1, VkglTestCase_022984_2);

#define VkglTestCase_022985_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_022985_2 "_5x5.mirror_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022985, VkglTestCase_022985_1, VkglTestCase_022985_2);

#define VkglTestCase_022986_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_022986_2 "_5x5.mirror_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022986, VkglTestCase_022986_1, VkglTestCase_022986_2);
