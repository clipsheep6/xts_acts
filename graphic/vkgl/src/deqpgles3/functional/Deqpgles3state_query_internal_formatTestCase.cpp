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
#include "../ActsDeqpgles30044TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_043266_1 "dEQP-GLES3.functional.state_qu"
#define VkglTestCase_043266_2 "ery.internal_format.r8_samples"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043266, VkglTestCase_043266_1, VkglTestCase_043266_2);

#define VkglTestCase_043267_1 "dEQP-GLES3.functional.state_qu"
#define VkglTestCase_043267_2 "ery.internal_format.rg8_samples"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043267, VkglTestCase_043267_1, VkglTestCase_043267_2);

#define VkglTestCase_043268_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_043268_2 "ry.internal_format.rgb8_samples"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043268, VkglTestCase_043268_1, VkglTestCase_043268_2);

#define VkglTestCase_043269_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_043269_2 "y.internal_format.rgb565_samples"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043269, VkglTestCase_043269_1, VkglTestCase_043269_2);

#define VkglTestCase_043270_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_043270_2 "ry.internal_format.rgba4_samples"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043270, VkglTestCase_043270_1, VkglTestCase_043270_2);

#define VkglTestCase_043271_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_043271_2 "y.internal_format.rgb5_a1_samples"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043271, VkglTestCase_043271_1, VkglTestCase_043271_2);

#define VkglTestCase_043272_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_043272_2 "ry.internal_format.rgba8_samples"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043272, VkglTestCase_043272_1, VkglTestCase_043272_2);

#define VkglTestCase_043273_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_043273_2 ".internal_format.rgb10_a2_samples"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043273, VkglTestCase_043273_1, VkglTestCase_043273_2);

#define VkglTestCase_043274_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_043274_2 "internal_format.rgb10_a2ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043274, VkglTestCase_043274_1, VkglTestCase_043274_2);

#define VkglTestCase_043275_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_043275_2 "nternal_format.srgb8_alpha8_samples"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043275, VkglTestCase_043275_1, VkglTestCase_043275_2);

#define VkglTestCase_043276_1 "dEQP-GLES3.functional.state_qu"
#define VkglTestCase_043276_2 "ery.internal_format.r8i_samples"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043276, VkglTestCase_043276_1, VkglTestCase_043276_2);

#define VkglTestCase_043277_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_043277_2 "ry.internal_format.r8ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043277, VkglTestCase_043277_1, VkglTestCase_043277_2);

#define VkglTestCase_043278_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_043278_2 "ry.internal_format.r16i_samples"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043278, VkglTestCase_043278_1, VkglTestCase_043278_2);

#define VkglTestCase_043279_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_043279_2 "ry.internal_format.r16ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043279, VkglTestCase_043279_1, VkglTestCase_043279_2);

#define VkglTestCase_043280_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_043280_2 "ry.internal_format.r32i_samples"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043280, VkglTestCase_043280_1, VkglTestCase_043280_2);

#define VkglTestCase_043281_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_043281_2 "ry.internal_format.r32ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043281, VkglTestCase_043281_1, VkglTestCase_043281_2);

#define VkglTestCase_043282_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_043282_2 "ry.internal_format.rg8i_samples"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043282, VkglTestCase_043282_1, VkglTestCase_043282_2);

#define VkglTestCase_043283_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_043283_2 "ry.internal_format.rg8ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043283, VkglTestCase_043283_1, VkglTestCase_043283_2);

#define VkglTestCase_043284_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_043284_2 "ry.internal_format.rg16i_samples"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043284, VkglTestCase_043284_1, VkglTestCase_043284_2);

#define VkglTestCase_043285_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_043285_2 "y.internal_format.rg16ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043285, VkglTestCase_043285_1, VkglTestCase_043285_2);

#define VkglTestCase_043286_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_043286_2 "ry.internal_format.rg32i_samples"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043286, VkglTestCase_043286_1, VkglTestCase_043286_2);

#define VkglTestCase_043287_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_043287_2 "y.internal_format.rg32ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043287, VkglTestCase_043287_1, VkglTestCase_043287_2);

#define VkglTestCase_043288_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_043288_2 "y.internal_format.rgba8i_samples"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043288, VkglTestCase_043288_1, VkglTestCase_043288_2);

#define VkglTestCase_043289_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_043289_2 "y.internal_format.rgba8ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043289, VkglTestCase_043289_1, VkglTestCase_043289_2);

#define VkglTestCase_043290_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_043290_2 "y.internal_format.rgba16i_samples"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043290, VkglTestCase_043290_1, VkglTestCase_043290_2);

#define VkglTestCase_043291_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_043291_2 ".internal_format.rgba16ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043291, VkglTestCase_043291_1, VkglTestCase_043291_2);

#define VkglTestCase_043292_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_043292_2 "y.internal_format.rgba32i_samples"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043292, VkglTestCase_043292_1, VkglTestCase_043292_2);

#define VkglTestCase_043293_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_043293_2 ".internal_format.rgba32ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043293, VkglTestCase_043293_1, VkglTestCase_043293_2);

#define VkglTestCase_043294_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_043294_2 "ernal_format.depth_component16_samples"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043294, VkglTestCase_043294_1, VkglTestCase_043294_2);

#define VkglTestCase_043295_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_043295_2 "ernal_format.depth_component24_samples"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043295, VkglTestCase_043295_1, VkglTestCase_043295_2);

#define VkglTestCase_043296_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_043296_2 "rnal_format.depth_component32f_samples"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043296, VkglTestCase_043296_1, VkglTestCase_043296_2);

#define VkglTestCase_043297_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_043297_2 "ernal_format.depth24_stencil8_samples"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043297, VkglTestCase_043297_1, VkglTestCase_043297_2);

#define VkglTestCase_043298_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_043298_2 "ernal_format.depth32f_stencil8_samples"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043298, VkglTestCase_043298_1, VkglTestCase_043298_2);

#define VkglTestCase_043299_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_043299_2 "ternal_format.stencil_index8_samples"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043299, VkglTestCase_043299_1, VkglTestCase_043299_2);

#define VkglTestCase_043300_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_043300_2 "nternal_format.rgba8_samples_buffer"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043300, VkglTestCase_043300_1, VkglTestCase_043300_2);
