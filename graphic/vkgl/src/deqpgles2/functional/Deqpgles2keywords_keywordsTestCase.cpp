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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002252_1 "dEQP-GLES2.functional.shaders.ke"
#define VkglTestCase_002252_2 "ywords.keywords.attribute_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002252, VkglTestCase_002252_1, VkglTestCase_002252_2);

#define VkglTestCase_002253_1 "dEQP-GLES2.functional.shaders.key"
#define VkglTestCase_002253_2 "words.keywords.attribute_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002253, VkglTestCase_002253_1, VkglTestCase_002253_2);

#define VkglTestCase_002254_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_002254_2 "keywords.keywords.const_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002254, VkglTestCase_002254_1, VkglTestCase_002254_2);

#define VkglTestCase_002255_1 "dEQP-GLES2.functional.shaders.k"
#define VkglTestCase_002255_2 "eywords.keywords.const_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002255, VkglTestCase_002255_1, VkglTestCase_002255_2);

#define VkglTestCase_002256_1 "dEQP-GLES2.functional.shaders.k"
#define VkglTestCase_002256_2 "eywords.keywords.uniform_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002256, VkglTestCase_002256_1, VkglTestCase_002256_2);

#define VkglTestCase_002257_1 "dEQP-GLES2.functional.shaders.ke"
#define VkglTestCase_002257_2 "ywords.keywords.uniform_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002257, VkglTestCase_002257_1, VkglTestCase_002257_2);

#define VkglTestCase_002258_1 "dEQP-GLES2.functional.shaders.k"
#define VkglTestCase_002258_2 "eywords.keywords.varying_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002258, VkglTestCase_002258_1, VkglTestCase_002258_2);

#define VkglTestCase_002259_1 "dEQP-GLES2.functional.shaders.ke"
#define VkglTestCase_002259_2 "ywords.keywords.varying_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002259, VkglTestCase_002259_1, VkglTestCase_002259_2);

#define VkglTestCase_002260_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_002260_2 "keywords.keywords.break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002260, VkglTestCase_002260_1, VkglTestCase_002260_2);

#define VkglTestCase_002261_1 "dEQP-GLES2.functional.shaders.k"
#define VkglTestCase_002261_2 "eywords.keywords.break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002261, VkglTestCase_002261_1, VkglTestCase_002261_2);

#define VkglTestCase_002262_1 "dEQP-GLES2.functional.shaders.k"
#define VkglTestCase_002262_2 "eywords.keywords.continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002262, VkglTestCase_002262_1, VkglTestCase_002262_2);

#define VkglTestCase_002263_1 "dEQP-GLES2.functional.shaders.ke"
#define VkglTestCase_002263_2 "ywords.keywords.continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002263, VkglTestCase_002263_1, VkglTestCase_002263_2);

#define VkglTestCase_002264_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_002264_2 "s.keywords.keywords.do_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002264, VkglTestCase_002264_1, VkglTestCase_002264_2);

#define VkglTestCase_002265_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_002265_2 ".keywords.keywords.do_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002265, VkglTestCase_002265_1, VkglTestCase_002265_2);

#define VkglTestCase_002266_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_002266_2 ".keywords.keywords.for_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002266, VkglTestCase_002266_1, VkglTestCase_002266_2);

#define VkglTestCase_002267_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_002267_2 "keywords.keywords.for_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002267, VkglTestCase_002267_1, VkglTestCase_002267_2);

#define VkglTestCase_002268_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_002268_2 "keywords.keywords.while_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002268, VkglTestCase_002268_1, VkglTestCase_002268_2);

#define VkglTestCase_002269_1 "dEQP-GLES2.functional.shaders.k"
#define VkglTestCase_002269_2 "eywords.keywords.while_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002269, VkglTestCase_002269_1, VkglTestCase_002269_2);

#define VkglTestCase_002270_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_002270_2 "s.keywords.keywords.if_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002270, VkglTestCase_002270_1, VkglTestCase_002270_2);

#define VkglTestCase_002271_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_002271_2 ".keywords.keywords.if_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002271, VkglTestCase_002271_1, VkglTestCase_002271_2);

#define VkglTestCase_002272_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_002272_2 ".keywords.keywords.else_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002272, VkglTestCase_002272_1, VkglTestCase_002272_2);

#define VkglTestCase_002273_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_002273_2 "keywords.keywords.else_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002273, VkglTestCase_002273_1, VkglTestCase_002273_2);

#define VkglTestCase_002274_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_002274_2 "s.keywords.keywords.in_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002274, VkglTestCase_002274_1, VkglTestCase_002274_2);

#define VkglTestCase_002275_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_002275_2 ".keywords.keywords.in_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002275, VkglTestCase_002275_1, VkglTestCase_002275_2);

#define VkglTestCase_002276_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_002276_2 ".keywords.keywords.out_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002276, VkglTestCase_002276_1, VkglTestCase_002276_2);

#define VkglTestCase_002277_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_002277_2 "keywords.keywords.out_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002277, VkglTestCase_002277_1, VkglTestCase_002277_2);

#define VkglTestCase_002278_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_002278_2 "keywords.keywords.inout_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002278, VkglTestCase_002278_1, VkglTestCase_002278_2);

#define VkglTestCase_002279_1 "dEQP-GLES2.functional.shaders.k"
#define VkglTestCase_002279_2 "eywords.keywords.inout_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002279, VkglTestCase_002279_1, VkglTestCase_002279_2);

#define VkglTestCase_002280_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_002280_2 "keywords.keywords.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002280, VkglTestCase_002280_1, VkglTestCase_002280_2);

#define VkglTestCase_002281_1 "dEQP-GLES2.functional.shaders.k"
#define VkglTestCase_002281_2 "eywords.keywords.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002281, VkglTestCase_002281_1, VkglTestCase_002281_2);

#define VkglTestCase_002282_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_002282_2 ".keywords.keywords.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002282, VkglTestCase_002282_1, VkglTestCase_002282_2);

#define VkglTestCase_002283_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_002283_2 "keywords.keywords.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002283, VkglTestCase_002283_1, VkglTestCase_002283_2);

#define VkglTestCase_002284_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_002284_2 ".keywords.keywords.void_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002284, VkglTestCase_002284_1, VkglTestCase_002284_2);

#define VkglTestCase_002285_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_002285_2 "keywords.keywords.void_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002285, VkglTestCase_002285_1, VkglTestCase_002285_2);

#define VkglTestCase_002286_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_002286_2 ".keywords.keywords.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002286, VkglTestCase_002286_1, VkglTestCase_002286_2);

#define VkglTestCase_002287_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_002287_2 "keywords.keywords.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002287, VkglTestCase_002287_1, VkglTestCase_002287_2);

#define VkglTestCase_002288_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_002288_2 ".keywords.keywords.lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002288, VkglTestCase_002288_1, VkglTestCase_002288_2);

#define VkglTestCase_002289_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_002289_2 "keywords.keywords.lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002289, VkglTestCase_002289_1, VkglTestCase_002289_2);

#define VkglTestCase_002290_1 "dEQP-GLES2.functional.shaders.k"
#define VkglTestCase_002290_2 "eywords.keywords.mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002290, VkglTestCase_002290_1, VkglTestCase_002290_2);

#define VkglTestCase_002291_1 "dEQP-GLES2.functional.shaders.ke"
#define VkglTestCase_002291_2 "ywords.keywords.mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002291, VkglTestCase_002291_1, VkglTestCase_002291_2);

#define VkglTestCase_002292_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_002292_2 "keywords.keywords.highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002292, VkglTestCase_002292_1, VkglTestCase_002292_2);

#define VkglTestCase_002293_1 "dEQP-GLES2.functional.shaders.k"
#define VkglTestCase_002293_2 "eywords.keywords.highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002293, VkglTestCase_002293_1, VkglTestCase_002293_2);

#define VkglTestCase_002294_1 "dEQP-GLES2.functional.shaders.ke"
#define VkglTestCase_002294_2 "ywords.keywords.precision_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002294, VkglTestCase_002294_1, VkglTestCase_002294_2);

#define VkglTestCase_002295_1 "dEQP-GLES2.functional.shaders.key"
#define VkglTestCase_002295_2 "words.keywords.precision_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002295, VkglTestCase_002295_1, VkglTestCase_002295_2);

#define VkglTestCase_002296_1 "dEQP-GLES2.functional.shaders.ke"
#define VkglTestCase_002296_2 "ywords.keywords.invariant_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002296, VkglTestCase_002296_1, VkglTestCase_002296_2);

#define VkglTestCase_002297_1 "dEQP-GLES2.functional.shaders.key"
#define VkglTestCase_002297_2 "words.keywords.invariant_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002297, VkglTestCase_002297_1, VkglTestCase_002297_2);

#define VkglTestCase_002298_1 "dEQP-GLES2.functional.shaders.k"
#define VkglTestCase_002298_2 "eywords.keywords.discard_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002298, VkglTestCase_002298_1, VkglTestCase_002298_2);

#define VkglTestCase_002299_1 "dEQP-GLES2.functional.shaders.ke"
#define VkglTestCase_002299_2 "ywords.keywords.discard_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002299, VkglTestCase_002299_1, VkglTestCase_002299_2);

#define VkglTestCase_002300_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_002300_2 "keywords.keywords.return_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002300, VkglTestCase_002300_1, VkglTestCase_002300_2);

#define VkglTestCase_002301_1 "dEQP-GLES2.functional.shaders.k"
#define VkglTestCase_002301_2 "eywords.keywords.return_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002301, VkglTestCase_002301_1, VkglTestCase_002301_2);

#define VkglTestCase_002302_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_002302_2 "keywords.keywords.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002302, VkglTestCase_002302_1, VkglTestCase_002302_2);

#define VkglTestCase_002303_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_002303_2 "keywords.keywords.struct_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002303, VkglTestCase_002303_1, VkglTestCase_002303_2);

#define VkglTestCase_002304_1 "dEQP-GLES2.functional.shaders.k"
#define VkglTestCase_002304_2 "eywords.keywords.struct_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002304, VkglTestCase_002304_1, VkglTestCase_002304_2);
