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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000541_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000541_2 "unctions.common.isnan.float_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000541, VkglTestCase_000541_1, VkglTestCase_000541_2);

#define VkglTestCase_000542_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000542_2 "ctions.common.isnan.float_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000542, VkglTestCase_000542_1, VkglTestCase_000542_2);

#define VkglTestCase_000543_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000543_2 "nctions.common.isnan.float_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000543, VkglTestCase_000543_1, VkglTestCase_000543_2);

#define VkglTestCase_000544_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000544_2 "unctions.common.isnan.float_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000544, VkglTestCase_000544_1, VkglTestCase_000544_2);

#define VkglTestCase_000545_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000545_2 "ctions.common.isnan.float_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000545, VkglTestCase_000545_1, VkglTestCase_000545_2);

#define VkglTestCase_000546_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_000546_2 "ions.common.isnan.float_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000546, VkglTestCase_000546_1, VkglTestCase_000546_2);

#define VkglTestCase_000547_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000547_2 "ctions.common.isnan.float_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000547, VkglTestCase_000547_1, VkglTestCase_000547_2);

#define VkglTestCase_000548_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000548_2 "nctions.common.isnan.float_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000548, VkglTestCase_000548_1, VkglTestCase_000548_2);

#define VkglTestCase_000549_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000549_2 "nctions.common.isnan.float_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000549, VkglTestCase_000549_1, VkglTestCase_000549_2);

#define VkglTestCase_000550_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000550_2 "tions.common.isnan.float_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000550, VkglTestCase_000550_1, VkglTestCase_000550_2);

#define VkglTestCase_000551_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000551_2 "nctions.common.isnan.float_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000551, VkglTestCase_000551_1, VkglTestCase_000551_2);

#define VkglTestCase_000552_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000552_2 "unctions.common.isnan.float_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000552, VkglTestCase_000552_1, VkglTestCase_000552_2);

#define VkglTestCase_000553_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000553_2 "unctions.common.isnan.vec2_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000553, VkglTestCase_000553_1, VkglTestCase_000553_2);

#define VkglTestCase_000554_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000554_2 "ctions.common.isnan.vec2_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000554, VkglTestCase_000554_1, VkglTestCase_000554_2);

#define VkglTestCase_000555_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000555_2 "unctions.common.isnan.vec2_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000555, VkglTestCase_000555_1, VkglTestCase_000555_2);

#define VkglTestCase_000556_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000556_2 "functions.common.isnan.vec2_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000556, VkglTestCase_000556_1, VkglTestCase_000556_2);

#define VkglTestCase_000557_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000557_2 "nctions.common.isnan.vec2_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000557, VkglTestCase_000557_1, VkglTestCase_000557_2);

#define VkglTestCase_000558_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000558_2 "tions.common.isnan.vec2_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000558, VkglTestCase_000558_1, VkglTestCase_000558_2);

#define VkglTestCase_000559_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000559_2 "ctions.common.isnan.vec2_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000559, VkglTestCase_000559_1, VkglTestCase_000559_2);

#define VkglTestCase_000560_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000560_2 "nctions.common.isnan.vec2_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000560, VkglTestCase_000560_1, VkglTestCase_000560_2);

#define VkglTestCase_000561_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000561_2 "unctions.common.isnan.vec2_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000561, VkglTestCase_000561_1, VkglTestCase_000561_2);

#define VkglTestCase_000562_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000562_2 "ctions.common.isnan.vec2_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000562, VkglTestCase_000562_1, VkglTestCase_000562_2);

#define VkglTestCase_000563_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000563_2 "nctions.common.isnan.vec2_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000563, VkglTestCase_000563_1, VkglTestCase_000563_2);

#define VkglTestCase_000564_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000564_2 "unctions.common.isnan.vec2_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000564, VkglTestCase_000564_1, VkglTestCase_000564_2);

#define VkglTestCase_000565_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000565_2 "unctions.common.isnan.vec3_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000565, VkglTestCase_000565_1, VkglTestCase_000565_2);

#define VkglTestCase_000566_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000566_2 "ctions.common.isnan.vec3_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000566, VkglTestCase_000566_1, VkglTestCase_000566_2);

#define VkglTestCase_000567_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000567_2 "unctions.common.isnan.vec3_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000567, VkglTestCase_000567_1, VkglTestCase_000567_2);

#define VkglTestCase_000568_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000568_2 "functions.common.isnan.vec3_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000568, VkglTestCase_000568_1, VkglTestCase_000568_2);

#define VkglTestCase_000569_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000569_2 "nctions.common.isnan.vec3_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000569, VkglTestCase_000569_1, VkglTestCase_000569_2);

#define VkglTestCase_000570_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000570_2 "tions.common.isnan.vec3_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000570, VkglTestCase_000570_1, VkglTestCase_000570_2);

#define VkglTestCase_000571_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000571_2 "ctions.common.isnan.vec3_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000571, VkglTestCase_000571_1, VkglTestCase_000571_2);

#define VkglTestCase_000572_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000572_2 "nctions.common.isnan.vec3_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000572, VkglTestCase_000572_1, VkglTestCase_000572_2);

#define VkglTestCase_000573_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000573_2 "unctions.common.isnan.vec3_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000573, VkglTestCase_000573_1, VkglTestCase_000573_2);

#define VkglTestCase_000574_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000574_2 "ctions.common.isnan.vec3_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000574, VkglTestCase_000574_1, VkglTestCase_000574_2);

#define VkglTestCase_000575_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000575_2 "nctions.common.isnan.vec3_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000575, VkglTestCase_000575_1, VkglTestCase_000575_2);

#define VkglTestCase_000576_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000576_2 "unctions.common.isnan.vec3_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000576, VkglTestCase_000576_1, VkglTestCase_000576_2);

#define VkglTestCase_000577_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000577_2 "unctions.common.isnan.vec4_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000577, VkglTestCase_000577_1, VkglTestCase_000577_2);

#define VkglTestCase_000578_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000578_2 "ctions.common.isnan.vec4_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000578, VkglTestCase_000578_1, VkglTestCase_000578_2);

#define VkglTestCase_000579_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000579_2 "unctions.common.isnan.vec4_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000579, VkglTestCase_000579_1, VkglTestCase_000579_2);

#define VkglTestCase_000580_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000580_2 "functions.common.isnan.vec4_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000580, VkglTestCase_000580_1, VkglTestCase_000580_2);

#define VkglTestCase_000581_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000581_2 "nctions.common.isnan.vec4_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000581, VkglTestCase_000581_1, VkglTestCase_000581_2);

#define VkglTestCase_000582_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000582_2 "tions.common.isnan.vec4_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000582, VkglTestCase_000582_1, VkglTestCase_000582_2);

#define VkglTestCase_000583_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000583_2 "ctions.common.isnan.vec4_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000583, VkglTestCase_000583_1, VkglTestCase_000583_2);

#define VkglTestCase_000584_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000584_2 "nctions.common.isnan.vec4_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000584, VkglTestCase_000584_1, VkglTestCase_000584_2);

#define VkglTestCase_000585_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000585_2 "unctions.common.isnan.vec4_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000585, VkglTestCase_000585_1, VkglTestCase_000585_2);

#define VkglTestCase_000586_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000586_2 "ctions.common.isnan.vec4_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000586, VkglTestCase_000586_1, VkglTestCase_000586_2);

#define VkglTestCase_000587_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000587_2 "nctions.common.isnan.vec4_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000587, VkglTestCase_000587_1, VkglTestCase_000587_2);

#define VkglTestCase_000588_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000588_2 "unctions.common.isnan.vec4_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000588, VkglTestCase_000588_1, VkglTestCase_000588_2);
