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

#define VkglTestCase_023131_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_023131_2 "stc_8x8.clamp_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023131, VkglTestCase_023131_1, VkglTestCase_023131_2);

#define VkglTestCase_023132_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_023132_2 "stc_8x8.clamp_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023132, VkglTestCase_023132_1, VkglTestCase_023132_2);

#define VkglTestCase_023133_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023133_2 "tc_8x8.clamp_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023133, VkglTestCase_023133_1, VkglTestCase_023133_2);

#define VkglTestCase_023134_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_023134_2 "stc_8x8.clamp_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023134, VkglTestCase_023134_1, VkglTestCase_023134_2);

#define VkglTestCase_023135_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023135_2 "tc_8x8.clamp_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023135, VkglTestCase_023135_1, VkglTestCase_023135_2);

#define VkglTestCase_023136_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_023136_2 "stc_8x8.clamp_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023136, VkglTestCase_023136_1, VkglTestCase_023136_2);

#define VkglTestCase_023137_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023137_2 "tc_8x8.repeat_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023137, VkglTestCase_023137_1, VkglTestCase_023137_2);

#define VkglTestCase_023138_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_023138_2 "stc_8x8.repeat_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023138, VkglTestCase_023138_1, VkglTestCase_023138_2);

#define VkglTestCase_023139_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023139_2 "tc_8x8.repeat_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023139, VkglTestCase_023139_1, VkglTestCase_023139_2);

#define VkglTestCase_023140_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023140_2 "tc_8x8.repeat_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023140, VkglTestCase_023140_1, VkglTestCase_023140_2);

#define VkglTestCase_023141_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023141_2 "tc_8x8.repeat_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023141, VkglTestCase_023141_1, VkglTestCase_023141_2);

#define VkglTestCase_023142_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023142_2 "tc_8x8.repeat_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023142, VkglTestCase_023142_1, VkglTestCase_023142_2);

#define VkglTestCase_023143_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023143_2 "tc_8x8.mirror_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023143, VkglTestCase_023143_1, VkglTestCase_023143_2);

#define VkglTestCase_023144_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_023144_2 "stc_8x8.mirror_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023144, VkglTestCase_023144_1, VkglTestCase_023144_2);

#define VkglTestCase_023145_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023145_2 "tc_8x8.mirror_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023145, VkglTestCase_023145_1, VkglTestCase_023145_2);

#define VkglTestCase_023146_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023146_2 "tc_8x8.mirror_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023146, VkglTestCase_023146_1, VkglTestCase_023146_2);

#define VkglTestCase_023147_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023147_2 "tc_8x8.mirror_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023147, VkglTestCase_023147_1, VkglTestCase_023147_2);

#define VkglTestCase_023148_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023148_2 "tc_8x8.mirror_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023148, VkglTestCase_023148_1, VkglTestCase_023148_2);

#define VkglTestCase_023149_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023149_2 "c_8x8.clamp_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023149, VkglTestCase_023149_1, VkglTestCase_023149_2);

#define VkglTestCase_023150_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023150_2 "c_8x8.clamp_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023150, VkglTestCase_023150_1, VkglTestCase_023150_2);

#define VkglTestCase_023151_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023151_2 "_8x8.clamp_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023151, VkglTestCase_023151_1, VkglTestCase_023151_2);

#define VkglTestCase_023152_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023152_2 "c_8x8.clamp_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023152, VkglTestCase_023152_1, VkglTestCase_023152_2);

#define VkglTestCase_023153_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023153_2 "_8x8.clamp_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023153, VkglTestCase_023153_1, VkglTestCase_023153_2);

#define VkglTestCase_023154_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023154_2 "c_8x8.clamp_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023154, VkglTestCase_023154_1, VkglTestCase_023154_2);

#define VkglTestCase_023155_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023155_2 "_8x8.repeat_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023155, VkglTestCase_023155_1, VkglTestCase_023155_2);

#define VkglTestCase_023156_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023156_2 "c_8x8.repeat_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023156, VkglTestCase_023156_1, VkglTestCase_023156_2);

#define VkglTestCase_023157_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023157_2 "_8x8.repeat_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023157, VkglTestCase_023157_1, VkglTestCase_023157_2);

#define VkglTestCase_023158_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023158_2 "_8x8.repeat_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023158, VkglTestCase_023158_1, VkglTestCase_023158_2);

#define VkglTestCase_023159_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023159_2 "_8x8.repeat_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023159, VkglTestCase_023159_1, VkglTestCase_023159_2);

#define VkglTestCase_023160_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023160_2 "_8x8.repeat_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023160, VkglTestCase_023160_1, VkglTestCase_023160_2);

#define VkglTestCase_023161_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023161_2 "_8x8.mirror_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023161, VkglTestCase_023161_1, VkglTestCase_023161_2);

#define VkglTestCase_023162_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023162_2 "c_8x8.mirror_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023162, VkglTestCase_023162_1, VkglTestCase_023162_2);

#define VkglTestCase_023163_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023163_2 "_8x8.mirror_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023163, VkglTestCase_023163_1, VkglTestCase_023163_2);

#define VkglTestCase_023164_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023164_2 "_8x8.mirror_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023164, VkglTestCase_023164_1, VkglTestCase_023164_2);

#define VkglTestCase_023165_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023165_2 "_8x8.mirror_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023165, VkglTestCase_023165_1, VkglTestCase_023165_2);

#define VkglTestCase_023166_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023166_2 "_8x8.mirror_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023166, VkglTestCase_023166_1, VkglTestCase_023166_2);
