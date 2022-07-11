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

#define VkglTestCase_023167_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023167_2 "tc_10x5.clamp_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023167, VkglTestCase_023167_1, VkglTestCase_023167_2);

#define VkglTestCase_023168_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_023168_2 "stc_10x5.clamp_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023168, VkglTestCase_023168_1, VkglTestCase_023168_2);

#define VkglTestCase_023169_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023169_2 "tc_10x5.clamp_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023169, VkglTestCase_023169_1, VkglTestCase_023169_2);

#define VkglTestCase_023170_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023170_2 "tc_10x5.clamp_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023170, VkglTestCase_023170_1, VkglTestCase_023170_2);

#define VkglTestCase_023171_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023171_2 "tc_10x5.clamp_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023171, VkglTestCase_023171_1, VkglTestCase_023171_2);

#define VkglTestCase_023172_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023172_2 "tc_10x5.clamp_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023172, VkglTestCase_023172_1, VkglTestCase_023172_2);

#define VkglTestCase_023173_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023173_2 "tc_10x5.repeat_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023173, VkglTestCase_023173_1, VkglTestCase_023173_2);

#define VkglTestCase_023174_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023174_2 "tc_10x5.repeat_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023174, VkglTestCase_023174_1, VkglTestCase_023174_2);

#define VkglTestCase_023175_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023175_2 "c_10x5.repeat_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023175, VkglTestCase_023175_1, VkglTestCase_023175_2);

#define VkglTestCase_023176_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023176_2 "tc_10x5.repeat_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023176, VkglTestCase_023176_1, VkglTestCase_023176_2);

#define VkglTestCase_023177_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023177_2 "c_10x5.repeat_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023177, VkglTestCase_023177_1, VkglTestCase_023177_2);

#define VkglTestCase_023178_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023178_2 "tc_10x5.repeat_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023178, VkglTestCase_023178_1, VkglTestCase_023178_2);

#define VkglTestCase_023179_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023179_2 "tc_10x5.mirror_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023179, VkglTestCase_023179_1, VkglTestCase_023179_2);

#define VkglTestCase_023180_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023180_2 "tc_10x5.mirror_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023180, VkglTestCase_023180_1, VkglTestCase_023180_2);

#define VkglTestCase_023181_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023181_2 "c_10x5.mirror_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023181, VkglTestCase_023181_1, VkglTestCase_023181_2);

#define VkglTestCase_023182_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023182_2 "tc_10x5.mirror_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023182, VkglTestCase_023182_1, VkglTestCase_023182_2);

#define VkglTestCase_023183_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023183_2 "c_10x5.mirror_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023183, VkglTestCase_023183_1, VkglTestCase_023183_2);

#define VkglTestCase_023184_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023184_2 "tc_10x5.mirror_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023184, VkglTestCase_023184_1, VkglTestCase_023184_2);

#define VkglTestCase_023185_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023185_2 "_10x5.clamp_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023185, VkglTestCase_023185_1, VkglTestCase_023185_2);

#define VkglTestCase_023186_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023186_2 "c_10x5.clamp_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023186, VkglTestCase_023186_1, VkglTestCase_023186_2);

#define VkglTestCase_023187_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023187_2 "_10x5.clamp_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023187, VkglTestCase_023187_1, VkglTestCase_023187_2);

#define VkglTestCase_023188_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023188_2 "_10x5.clamp_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023188, VkglTestCase_023188_1, VkglTestCase_023188_2);

#define VkglTestCase_023189_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023189_2 "_10x5.clamp_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023189, VkglTestCase_023189_1, VkglTestCase_023189_2);

#define VkglTestCase_023190_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023190_2 "_10x5.clamp_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023190, VkglTestCase_023190_1, VkglTestCase_023190_2);

#define VkglTestCase_023191_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023191_2 "_10x5.repeat_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023191, VkglTestCase_023191_1, VkglTestCase_023191_2);

#define VkglTestCase_023192_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023192_2 "_10x5.repeat_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023192, VkglTestCase_023192_1, VkglTestCase_023192_2);

#define VkglTestCase_023193_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023193_2 "10x5.repeat_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023193, VkglTestCase_023193_1, VkglTestCase_023193_2);

#define VkglTestCase_023194_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023194_2 "_10x5.repeat_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023194, VkglTestCase_023194_1, VkglTestCase_023194_2);

#define VkglTestCase_023195_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023195_2 "10x5.repeat_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023195, VkglTestCase_023195_1, VkglTestCase_023195_2);

#define VkglTestCase_023196_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023196_2 "_10x5.repeat_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023196, VkglTestCase_023196_1, VkglTestCase_023196_2);

#define VkglTestCase_023197_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023197_2 "_10x5.mirror_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023197, VkglTestCase_023197_1, VkglTestCase_023197_2);

#define VkglTestCase_023198_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023198_2 "_10x5.mirror_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023198, VkglTestCase_023198_1, VkglTestCase_023198_2);

#define VkglTestCase_023199_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023199_2 "10x5.mirror_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023199, VkglTestCase_023199_1, VkglTestCase_023199_2);

#define VkglTestCase_023200_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023200_2 "_10x5.mirror_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023200, VkglTestCase_023200_1, VkglTestCase_023200_2);

#define VkglTestCase_023201_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023201_2 "10x5.mirror_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023201, VkglTestCase_023201_1, VkglTestCase_023201_2);

#define VkglTestCase_023202_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023202_2 "_10x5.mirror_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023202, VkglTestCase_023202_1, VkglTestCase_023202_2);
