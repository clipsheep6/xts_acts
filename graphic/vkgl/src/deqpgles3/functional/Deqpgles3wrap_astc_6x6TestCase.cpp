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

#define VkglTestCase_023023_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_023023_2 "stc_6x6.clamp_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023023, VkglTestCase_023023_1, VkglTestCase_023023_2);

#define VkglTestCase_023024_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_023024_2 "stc_6x6.clamp_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023024, VkglTestCase_023024_1, VkglTestCase_023024_2);

#define VkglTestCase_023025_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023025_2 "tc_6x6.clamp_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023025, VkglTestCase_023025_1, VkglTestCase_023025_2);

#define VkglTestCase_023026_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_023026_2 "stc_6x6.clamp_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023026, VkglTestCase_023026_1, VkglTestCase_023026_2);

#define VkglTestCase_023027_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023027_2 "tc_6x6.clamp_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023027, VkglTestCase_023027_1, VkglTestCase_023027_2);

#define VkglTestCase_023028_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_023028_2 "stc_6x6.clamp_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023028, VkglTestCase_023028_1, VkglTestCase_023028_2);

#define VkglTestCase_023029_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023029_2 "tc_6x6.repeat_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023029, VkglTestCase_023029_1, VkglTestCase_023029_2);

#define VkglTestCase_023030_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_023030_2 "stc_6x6.repeat_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023030, VkglTestCase_023030_1, VkglTestCase_023030_2);

#define VkglTestCase_023031_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023031_2 "tc_6x6.repeat_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023031, VkglTestCase_023031_1, VkglTestCase_023031_2);

#define VkglTestCase_023032_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023032_2 "tc_6x6.repeat_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023032, VkglTestCase_023032_1, VkglTestCase_023032_2);

#define VkglTestCase_023033_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023033_2 "tc_6x6.repeat_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023033, VkglTestCase_023033_1, VkglTestCase_023033_2);

#define VkglTestCase_023034_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023034_2 "tc_6x6.repeat_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023034, VkglTestCase_023034_1, VkglTestCase_023034_2);

#define VkglTestCase_023035_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023035_2 "tc_6x6.mirror_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023035, VkglTestCase_023035_1, VkglTestCase_023035_2);

#define VkglTestCase_023036_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_023036_2 "stc_6x6.mirror_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023036, VkglTestCase_023036_1, VkglTestCase_023036_2);

#define VkglTestCase_023037_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023037_2 "tc_6x6.mirror_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023037, VkglTestCase_023037_1, VkglTestCase_023037_2);

#define VkglTestCase_023038_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023038_2 "tc_6x6.mirror_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023038, VkglTestCase_023038_1, VkglTestCase_023038_2);

#define VkglTestCase_023039_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023039_2 "tc_6x6.mirror_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023039, VkglTestCase_023039_1, VkglTestCase_023039_2);

#define VkglTestCase_023040_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023040_2 "tc_6x6.mirror_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023040, VkglTestCase_023040_1, VkglTestCase_023040_2);

#define VkglTestCase_023041_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023041_2 "c_6x6.clamp_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023041, VkglTestCase_023041_1, VkglTestCase_023041_2);

#define VkglTestCase_023042_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023042_2 "c_6x6.clamp_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023042, VkglTestCase_023042_1, VkglTestCase_023042_2);

#define VkglTestCase_023043_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023043_2 "_6x6.clamp_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023043, VkglTestCase_023043_1, VkglTestCase_023043_2);

#define VkglTestCase_023044_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023044_2 "c_6x6.clamp_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023044, VkglTestCase_023044_1, VkglTestCase_023044_2);

#define VkglTestCase_023045_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023045_2 "_6x6.clamp_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023045, VkglTestCase_023045_1, VkglTestCase_023045_2);

#define VkglTestCase_023046_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023046_2 "c_6x6.clamp_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023046, VkglTestCase_023046_1, VkglTestCase_023046_2);

#define VkglTestCase_023047_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023047_2 "_6x6.repeat_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023047, VkglTestCase_023047_1, VkglTestCase_023047_2);

#define VkglTestCase_023048_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023048_2 "c_6x6.repeat_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023048, VkglTestCase_023048_1, VkglTestCase_023048_2);

#define VkglTestCase_023049_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023049_2 "_6x6.repeat_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023049, VkglTestCase_023049_1, VkglTestCase_023049_2);

#define VkglTestCase_023050_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023050_2 "_6x6.repeat_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023050, VkglTestCase_023050_1, VkglTestCase_023050_2);

#define VkglTestCase_023051_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023051_2 "_6x6.repeat_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023051, VkglTestCase_023051_1, VkglTestCase_023051_2);

#define VkglTestCase_023052_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023052_2 "_6x6.repeat_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023052, VkglTestCase_023052_1, VkglTestCase_023052_2);

#define VkglTestCase_023053_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023053_2 "_6x6.mirror_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023053, VkglTestCase_023053_1, VkglTestCase_023053_2);

#define VkglTestCase_023054_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023054_2 "c_6x6.mirror_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023054, VkglTestCase_023054_1, VkglTestCase_023054_2);

#define VkglTestCase_023055_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023055_2 "_6x6.mirror_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023055, VkglTestCase_023055_1, VkglTestCase_023055_2);

#define VkglTestCase_023056_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023056_2 "_6x6.mirror_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023056, VkglTestCase_023056_1, VkglTestCase_023056_2);

#define VkglTestCase_023057_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023057_2 "_6x6.mirror_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023057, VkglTestCase_023057_1, VkglTestCase_023057_2);

#define VkglTestCase_023058_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023058_2 "_6x6.mirror_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023058, VkglTestCase_023058_1, VkglTestCase_023058_2);
