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
#include "../ActsDeqpgles30019TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_018135_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018135_2 "ctions.common.roundeven.float_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018135, VkglTestCase_018135_1, VkglTestCase_018135_2);

#define VkglTestCase_018136_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_018136_2 "tions.common.roundeven.float_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018136, VkglTestCase_018136_1, VkglTestCase_018136_2);

#define VkglTestCase_018137_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_018137_2 "tions.common.roundeven.float_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018137, VkglTestCase_018137_1, VkglTestCase_018137_2);

#define VkglTestCase_018138_1 "dEQP-GLES3.functional.shaders.builtin_funct"
#define VkglTestCase_018138_2 "ions.common.roundeven.float_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018138, VkglTestCase_018138_1, VkglTestCase_018138_2);

#define VkglTestCase_018139_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018139_2 "ctions.common.roundeven.float_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018139, VkglTestCase_018139_1, VkglTestCase_018139_2);

#define VkglTestCase_018140_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_018140_2 "tions.common.roundeven.float_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018140, VkglTestCase_018140_1, VkglTestCase_018140_2);

#define VkglTestCase_018141_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018141_2 "nctions.common.roundeven.vec2_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018141, VkglTestCase_018141_1, VkglTestCase_018141_2);

#define VkglTestCase_018142_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018142_2 "ctions.common.roundeven.vec2_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018142, VkglTestCase_018142_1, VkglTestCase_018142_2);

#define VkglTestCase_018143_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_018143_2 "tions.common.roundeven.vec2_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018143, VkglTestCase_018143_1, VkglTestCase_018143_2);

#define VkglTestCase_018144_1 "dEQP-GLES3.functional.shaders.builtin_funct"
#define VkglTestCase_018144_2 "ions.common.roundeven.vec2_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018144, VkglTestCase_018144_1, VkglTestCase_018144_2);

#define VkglTestCase_018145_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018145_2 "ctions.common.roundeven.vec2_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018145, VkglTestCase_018145_1, VkglTestCase_018145_2);

#define VkglTestCase_018146_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_018146_2 "tions.common.roundeven.vec2_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018146, VkglTestCase_018146_1, VkglTestCase_018146_2);

#define VkglTestCase_018147_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018147_2 "nctions.common.roundeven.vec3_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018147, VkglTestCase_018147_1, VkglTestCase_018147_2);

#define VkglTestCase_018148_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018148_2 "ctions.common.roundeven.vec3_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018148, VkglTestCase_018148_1, VkglTestCase_018148_2);

#define VkglTestCase_018149_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_018149_2 "tions.common.roundeven.vec3_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018149, VkglTestCase_018149_1, VkglTestCase_018149_2);

#define VkglTestCase_018150_1 "dEQP-GLES3.functional.shaders.builtin_funct"
#define VkglTestCase_018150_2 "ions.common.roundeven.vec3_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018150, VkglTestCase_018150_1, VkglTestCase_018150_2);

#define VkglTestCase_018151_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018151_2 "ctions.common.roundeven.vec3_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018151, VkglTestCase_018151_1, VkglTestCase_018151_2);

#define VkglTestCase_018152_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_018152_2 "tions.common.roundeven.vec3_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018152, VkglTestCase_018152_1, VkglTestCase_018152_2);

#define VkglTestCase_018153_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018153_2 "nctions.common.roundeven.vec4_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018153, VkglTestCase_018153_1, VkglTestCase_018153_2);

#define VkglTestCase_018154_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018154_2 "ctions.common.roundeven.vec4_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018154, VkglTestCase_018154_1, VkglTestCase_018154_2);

#define VkglTestCase_018155_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_018155_2 "tions.common.roundeven.vec4_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018155, VkglTestCase_018155_1, VkglTestCase_018155_2);

#define VkglTestCase_018156_1 "dEQP-GLES3.functional.shaders.builtin_funct"
#define VkglTestCase_018156_2 "ions.common.roundeven.vec4_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018156, VkglTestCase_018156_1, VkglTestCase_018156_2);

#define VkglTestCase_018157_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018157_2 "ctions.common.roundeven.vec4_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018157, VkglTestCase_018157_1, VkglTestCase_018157_2);

#define VkglTestCase_018158_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_018158_2 "tions.common.roundeven.vec4_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018158, VkglTestCase_018158_1, VkglTestCase_018158_2);
