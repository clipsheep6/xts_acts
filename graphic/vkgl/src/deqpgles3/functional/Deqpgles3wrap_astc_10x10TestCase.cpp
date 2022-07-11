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

#define VkglTestCase_023275_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023275_2 "tc_10x10.clamp_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023275, VkglTestCase_023275_1, VkglTestCase_023275_2);

#define VkglTestCase_023276_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023276_2 "tc_10x10.clamp_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023276, VkglTestCase_023276_1, VkglTestCase_023276_2);

#define VkglTestCase_023277_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023277_2 "c_10x10.clamp_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023277, VkglTestCase_023277_1, VkglTestCase_023277_2);

#define VkglTestCase_023278_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023278_2 "tc_10x10.clamp_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023278, VkglTestCase_023278_1, VkglTestCase_023278_2);

#define VkglTestCase_023279_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023279_2 "c_10x10.clamp_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023279, VkglTestCase_023279_1, VkglTestCase_023279_2);

#define VkglTestCase_023280_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023280_2 "tc_10x10.clamp_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023280, VkglTestCase_023280_1, VkglTestCase_023280_2);

#define VkglTestCase_023281_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023281_2 "c_10x10.repeat_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023281, VkglTestCase_023281_1, VkglTestCase_023281_2);

#define VkglTestCase_023282_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023282_2 "tc_10x10.repeat_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023282, VkglTestCase_023282_1, VkglTestCase_023282_2);

#define VkglTestCase_023283_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023283_2 "c_10x10.repeat_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023283, VkglTestCase_023283_1, VkglTestCase_023283_2);

#define VkglTestCase_023284_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023284_2 "c_10x10.repeat_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023284, VkglTestCase_023284_1, VkglTestCase_023284_2);

#define VkglTestCase_023285_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023285_2 "c_10x10.repeat_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023285, VkglTestCase_023285_1, VkglTestCase_023285_2);

#define VkglTestCase_023286_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023286_2 "c_10x10.repeat_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023286, VkglTestCase_023286_1, VkglTestCase_023286_2);

#define VkglTestCase_023287_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023287_2 "c_10x10.mirror_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023287, VkglTestCase_023287_1, VkglTestCase_023287_2);

#define VkglTestCase_023288_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023288_2 "tc_10x10.mirror_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023288, VkglTestCase_023288_1, VkglTestCase_023288_2);

#define VkglTestCase_023289_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023289_2 "c_10x10.mirror_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023289, VkglTestCase_023289_1, VkglTestCase_023289_2);

#define VkglTestCase_023290_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023290_2 "c_10x10.mirror_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023290, VkglTestCase_023290_1, VkglTestCase_023290_2);

#define VkglTestCase_023291_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023291_2 "c_10x10.mirror_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023291, VkglTestCase_023291_1, VkglTestCase_023291_2);

#define VkglTestCase_023292_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023292_2 "c_10x10.mirror_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023292, VkglTestCase_023292_1, VkglTestCase_023292_2);

#define VkglTestCase_023293_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023293_2 "_10x10.clamp_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023293, VkglTestCase_023293_1, VkglTestCase_023293_2);

#define VkglTestCase_023294_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023294_2 "_10x10.clamp_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023294, VkglTestCase_023294_1, VkglTestCase_023294_2);

#define VkglTestCase_023295_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023295_2 "10x10.clamp_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023295, VkglTestCase_023295_1, VkglTestCase_023295_2);

#define VkglTestCase_023296_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023296_2 "_10x10.clamp_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023296, VkglTestCase_023296_1, VkglTestCase_023296_2);

#define VkglTestCase_023297_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023297_2 "10x10.clamp_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023297, VkglTestCase_023297_1, VkglTestCase_023297_2);

#define VkglTestCase_023298_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023298_2 "_10x10.clamp_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023298, VkglTestCase_023298_1, VkglTestCase_023298_2);

#define VkglTestCase_023299_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023299_2 "10x10.repeat_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023299, VkglTestCase_023299_1, VkglTestCase_023299_2);

#define VkglTestCase_023300_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023300_2 "_10x10.repeat_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023300, VkglTestCase_023300_1, VkglTestCase_023300_2);

#define VkglTestCase_023301_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023301_2 "10x10.repeat_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023301, VkglTestCase_023301_1, VkglTestCase_023301_2);

#define VkglTestCase_023302_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023302_2 "10x10.repeat_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023302, VkglTestCase_023302_1, VkglTestCase_023302_2);

#define VkglTestCase_023303_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023303_2 "10x10.repeat_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023303, VkglTestCase_023303_1, VkglTestCase_023303_2);

#define VkglTestCase_023304_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023304_2 "10x10.repeat_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023304, VkglTestCase_023304_1, VkglTestCase_023304_2);

#define VkglTestCase_023305_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023305_2 "10x10.mirror_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023305, VkglTestCase_023305_1, VkglTestCase_023305_2);

#define VkglTestCase_023306_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023306_2 "_10x10.mirror_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023306, VkglTestCase_023306_1, VkglTestCase_023306_2);

#define VkglTestCase_023307_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023307_2 "10x10.mirror_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023307, VkglTestCase_023307_1, VkglTestCase_023307_2);

#define VkglTestCase_023308_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023308_2 "10x10.mirror_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023308, VkglTestCase_023308_1, VkglTestCase_023308_2);

#define VkglTestCase_023309_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023309_2 "10x10.mirror_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023309, VkglTestCase_023309_1, VkglTestCase_023309_2);

#define VkglTestCase_023310_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023310_2 "10x10.mirror_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023310, VkglTestCase_023310_1, VkglTestCase_023310_2);
