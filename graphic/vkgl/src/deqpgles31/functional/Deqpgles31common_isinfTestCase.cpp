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

#define VkglTestCase_000589_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000589_2 "unctions.common.isinf.float_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000589, VkglTestCase_000589_1, VkglTestCase_000589_2);

#define VkglTestCase_000590_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000590_2 "ctions.common.isinf.float_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000590, VkglTestCase_000590_1, VkglTestCase_000590_2);

#define VkglTestCase_000591_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000591_2 "nctions.common.isinf.float_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000591, VkglTestCase_000591_1, VkglTestCase_000591_2);

#define VkglTestCase_000592_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000592_2 "unctions.common.isinf.float_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000592, VkglTestCase_000592_1, VkglTestCase_000592_2);

#define VkglTestCase_000593_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000593_2 "ctions.common.isinf.float_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000593, VkglTestCase_000593_1, VkglTestCase_000593_2);

#define VkglTestCase_000594_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_000594_2 "ions.common.isinf.float_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000594, VkglTestCase_000594_1, VkglTestCase_000594_2);

#define VkglTestCase_000595_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000595_2 "ctions.common.isinf.float_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000595, VkglTestCase_000595_1, VkglTestCase_000595_2);

#define VkglTestCase_000596_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000596_2 "nctions.common.isinf.float_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000596, VkglTestCase_000596_1, VkglTestCase_000596_2);

#define VkglTestCase_000597_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000597_2 "nctions.common.isinf.float_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000597, VkglTestCase_000597_1, VkglTestCase_000597_2);

#define VkglTestCase_000598_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000598_2 "tions.common.isinf.float_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000598, VkglTestCase_000598_1, VkglTestCase_000598_2);

#define VkglTestCase_000599_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000599_2 "nctions.common.isinf.float_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000599, VkglTestCase_000599_1, VkglTestCase_000599_2);

#define VkglTestCase_000600_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000600_2 "unctions.common.isinf.float_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000600, VkglTestCase_000600_1, VkglTestCase_000600_2);

#define VkglTestCase_000601_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000601_2 "unctions.common.isinf.vec2_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000601, VkglTestCase_000601_1, VkglTestCase_000601_2);

#define VkglTestCase_000602_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000602_2 "ctions.common.isinf.vec2_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000602, VkglTestCase_000602_1, VkglTestCase_000602_2);

#define VkglTestCase_000603_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000603_2 "unctions.common.isinf.vec2_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000603, VkglTestCase_000603_1, VkglTestCase_000603_2);

#define VkglTestCase_000604_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000604_2 "functions.common.isinf.vec2_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000604, VkglTestCase_000604_1, VkglTestCase_000604_2);

#define VkglTestCase_000605_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000605_2 "nctions.common.isinf.vec2_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000605, VkglTestCase_000605_1, VkglTestCase_000605_2);

#define VkglTestCase_000606_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000606_2 "tions.common.isinf.vec2_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000606, VkglTestCase_000606_1, VkglTestCase_000606_2);

#define VkglTestCase_000607_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000607_2 "ctions.common.isinf.vec2_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000607, VkglTestCase_000607_1, VkglTestCase_000607_2);

#define VkglTestCase_000608_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000608_2 "nctions.common.isinf.vec2_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000608, VkglTestCase_000608_1, VkglTestCase_000608_2);

#define VkglTestCase_000609_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000609_2 "unctions.common.isinf.vec2_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000609, VkglTestCase_000609_1, VkglTestCase_000609_2);

#define VkglTestCase_000610_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000610_2 "ctions.common.isinf.vec2_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000610, VkglTestCase_000610_1, VkglTestCase_000610_2);

#define VkglTestCase_000611_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000611_2 "nctions.common.isinf.vec2_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000611, VkglTestCase_000611_1, VkglTestCase_000611_2);

#define VkglTestCase_000612_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000612_2 "unctions.common.isinf.vec2_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000612, VkglTestCase_000612_1, VkglTestCase_000612_2);

#define VkglTestCase_000613_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000613_2 "unctions.common.isinf.vec3_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000613, VkglTestCase_000613_1, VkglTestCase_000613_2);

#define VkglTestCase_000614_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000614_2 "ctions.common.isinf.vec3_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000614, VkglTestCase_000614_1, VkglTestCase_000614_2);

#define VkglTestCase_000615_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000615_2 "unctions.common.isinf.vec3_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000615, VkglTestCase_000615_1, VkglTestCase_000615_2);

#define VkglTestCase_000616_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000616_2 "functions.common.isinf.vec3_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000616, VkglTestCase_000616_1, VkglTestCase_000616_2);

#define VkglTestCase_000617_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000617_2 "nctions.common.isinf.vec3_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000617, VkglTestCase_000617_1, VkglTestCase_000617_2);

#define VkglTestCase_000618_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000618_2 "tions.common.isinf.vec3_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000618, VkglTestCase_000618_1, VkglTestCase_000618_2);

#define VkglTestCase_000619_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000619_2 "ctions.common.isinf.vec3_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000619, VkglTestCase_000619_1, VkglTestCase_000619_2);

#define VkglTestCase_000620_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000620_2 "nctions.common.isinf.vec3_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000620, VkglTestCase_000620_1, VkglTestCase_000620_2);

#define VkglTestCase_000621_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000621_2 "unctions.common.isinf.vec3_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000621, VkglTestCase_000621_1, VkglTestCase_000621_2);

#define VkglTestCase_000622_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000622_2 "ctions.common.isinf.vec3_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000622, VkglTestCase_000622_1, VkglTestCase_000622_2);

#define VkglTestCase_000623_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000623_2 "nctions.common.isinf.vec3_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000623, VkglTestCase_000623_1, VkglTestCase_000623_2);

#define VkglTestCase_000624_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000624_2 "unctions.common.isinf.vec3_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000624, VkglTestCase_000624_1, VkglTestCase_000624_2);

#define VkglTestCase_000625_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000625_2 "unctions.common.isinf.vec4_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000625, VkglTestCase_000625_1, VkglTestCase_000625_2);

#define VkglTestCase_000626_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000626_2 "ctions.common.isinf.vec4_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000626, VkglTestCase_000626_1, VkglTestCase_000626_2);

#define VkglTestCase_000627_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000627_2 "unctions.common.isinf.vec4_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000627, VkglTestCase_000627_1, VkglTestCase_000627_2);

#define VkglTestCase_000628_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000628_2 "functions.common.isinf.vec4_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000628, VkglTestCase_000628_1, VkglTestCase_000628_2);

#define VkglTestCase_000629_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000629_2 "nctions.common.isinf.vec4_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000629, VkglTestCase_000629_1, VkglTestCase_000629_2);

#define VkglTestCase_000630_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000630_2 "tions.common.isinf.vec4_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000630, VkglTestCase_000630_1, VkglTestCase_000630_2);

#define VkglTestCase_000631_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000631_2 "ctions.common.isinf.vec4_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000631, VkglTestCase_000631_1, VkglTestCase_000631_2);

#define VkglTestCase_000632_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000632_2 "nctions.common.isinf.vec4_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000632, VkglTestCase_000632_1, VkglTestCase_000632_2);

#define VkglTestCase_000633_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000633_2 "unctions.common.isinf.vec4_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000633, VkglTestCase_000633_1, VkglTestCase_000633_2);

#define VkglTestCase_000634_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000634_2 "ctions.common.isinf.vec4_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000634, VkglTestCase_000634_1, VkglTestCase_000634_2);

#define VkglTestCase_000635_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000635_2 "nctions.common.isinf.vec4_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000635, VkglTestCase_000635_1, VkglTestCase_000635_2);

#define VkglTestCase_000636_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000636_2 "unctions.common.isinf.vec4_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000636, VkglTestCase_000636_1, VkglTestCase_000636_2);
