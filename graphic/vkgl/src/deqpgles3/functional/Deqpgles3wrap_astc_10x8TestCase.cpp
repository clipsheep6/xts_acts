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

#define VkglTestCase_023239_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023239_2 "tc_10x8.clamp_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023239, VkglTestCase_023239_1, VkglTestCase_023239_2);

#define VkglTestCase_023240_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_023240_2 "stc_10x8.clamp_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023240, VkglTestCase_023240_1, VkglTestCase_023240_2);

#define VkglTestCase_023241_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023241_2 "tc_10x8.clamp_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023241, VkglTestCase_023241_1, VkglTestCase_023241_2);

#define VkglTestCase_023242_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023242_2 "tc_10x8.clamp_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023242, VkglTestCase_023242_1, VkglTestCase_023242_2);

#define VkglTestCase_023243_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023243_2 "tc_10x8.clamp_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023243, VkglTestCase_023243_1, VkglTestCase_023243_2);

#define VkglTestCase_023244_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023244_2 "tc_10x8.clamp_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023244, VkglTestCase_023244_1, VkglTestCase_023244_2);

#define VkglTestCase_023245_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023245_2 "tc_10x8.repeat_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023245, VkglTestCase_023245_1, VkglTestCase_023245_2);

#define VkglTestCase_023246_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023246_2 "tc_10x8.repeat_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023246, VkglTestCase_023246_1, VkglTestCase_023246_2);

#define VkglTestCase_023247_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023247_2 "c_10x8.repeat_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023247, VkglTestCase_023247_1, VkglTestCase_023247_2);

#define VkglTestCase_023248_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023248_2 "tc_10x8.repeat_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023248, VkglTestCase_023248_1, VkglTestCase_023248_2);

#define VkglTestCase_023249_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023249_2 "c_10x8.repeat_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023249, VkglTestCase_023249_1, VkglTestCase_023249_2);

#define VkglTestCase_023250_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023250_2 "tc_10x8.repeat_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023250, VkglTestCase_023250_1, VkglTestCase_023250_2);

#define VkglTestCase_023251_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023251_2 "tc_10x8.mirror_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023251, VkglTestCase_023251_1, VkglTestCase_023251_2);

#define VkglTestCase_023252_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023252_2 "tc_10x8.mirror_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023252, VkglTestCase_023252_1, VkglTestCase_023252_2);

#define VkglTestCase_023253_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023253_2 "c_10x8.mirror_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023253, VkglTestCase_023253_1, VkglTestCase_023253_2);

#define VkglTestCase_023254_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023254_2 "tc_10x8.mirror_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023254, VkglTestCase_023254_1, VkglTestCase_023254_2);

#define VkglTestCase_023255_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023255_2 "c_10x8.mirror_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023255, VkglTestCase_023255_1, VkglTestCase_023255_2);

#define VkglTestCase_023256_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023256_2 "tc_10x8.mirror_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023256, VkglTestCase_023256_1, VkglTestCase_023256_2);

#define VkglTestCase_023257_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023257_2 "_10x8.clamp_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023257, VkglTestCase_023257_1, VkglTestCase_023257_2);

#define VkglTestCase_023258_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023258_2 "c_10x8.clamp_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023258, VkglTestCase_023258_1, VkglTestCase_023258_2);

#define VkglTestCase_023259_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023259_2 "_10x8.clamp_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023259, VkglTestCase_023259_1, VkglTestCase_023259_2);

#define VkglTestCase_023260_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023260_2 "_10x8.clamp_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023260, VkglTestCase_023260_1, VkglTestCase_023260_2);

#define VkglTestCase_023261_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023261_2 "_10x8.clamp_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023261, VkglTestCase_023261_1, VkglTestCase_023261_2);

#define VkglTestCase_023262_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023262_2 "_10x8.clamp_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023262, VkglTestCase_023262_1, VkglTestCase_023262_2);

#define VkglTestCase_023263_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023263_2 "_10x8.repeat_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023263, VkglTestCase_023263_1, VkglTestCase_023263_2);

#define VkglTestCase_023264_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023264_2 "_10x8.repeat_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023264, VkglTestCase_023264_1, VkglTestCase_023264_2);

#define VkglTestCase_023265_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023265_2 "10x8.repeat_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023265, VkglTestCase_023265_1, VkglTestCase_023265_2);

#define VkglTestCase_023266_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023266_2 "_10x8.repeat_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023266, VkglTestCase_023266_1, VkglTestCase_023266_2);

#define VkglTestCase_023267_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023267_2 "10x8.repeat_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023267, VkglTestCase_023267_1, VkglTestCase_023267_2);

#define VkglTestCase_023268_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023268_2 "_10x8.repeat_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023268, VkglTestCase_023268_1, VkglTestCase_023268_2);

#define VkglTestCase_023269_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023269_2 "_10x8.mirror_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023269, VkglTestCase_023269_1, VkglTestCase_023269_2);

#define VkglTestCase_023270_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023270_2 "_10x8.mirror_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023270, VkglTestCase_023270_1, VkglTestCase_023270_2);

#define VkglTestCase_023271_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023271_2 "10x8.mirror_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023271, VkglTestCase_023271_1, VkglTestCase_023271_2);

#define VkglTestCase_023272_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023272_2 "_10x8.mirror_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023272, VkglTestCase_023272_1, VkglTestCase_023272_2);

#define VkglTestCase_023273_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023273_2 "10x8.mirror_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023273, VkglTestCase_023273_1, VkglTestCase_023273_2);

#define VkglTestCase_023274_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023274_2 "_10x8.mirror_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023274, VkglTestCase_023274_1, VkglTestCase_023274_2);
