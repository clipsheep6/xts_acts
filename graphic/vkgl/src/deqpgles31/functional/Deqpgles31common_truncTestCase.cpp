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

#define VkglTestCase_000253_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000253_2 "unctions.common.trunc.float_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000253, VkglTestCase_000253_1, VkglTestCase_000253_2);

#define VkglTestCase_000254_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000254_2 "ctions.common.trunc.float_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000254, VkglTestCase_000254_1, VkglTestCase_000254_2);

#define VkglTestCase_000255_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000255_2 "nctions.common.trunc.float_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000255, VkglTestCase_000255_1, VkglTestCase_000255_2);

#define VkglTestCase_000256_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000256_2 "unctions.common.trunc.float_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000256, VkglTestCase_000256_1, VkglTestCase_000256_2);

#define VkglTestCase_000257_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000257_2 "ctions.common.trunc.float_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000257, VkglTestCase_000257_1, VkglTestCase_000257_2);

#define VkglTestCase_000258_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_000258_2 "ions.common.trunc.float_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000258, VkglTestCase_000258_1, VkglTestCase_000258_2);

#define VkglTestCase_000259_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000259_2 "ctions.common.trunc.float_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000259, VkglTestCase_000259_1, VkglTestCase_000259_2);

#define VkglTestCase_000260_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000260_2 "nctions.common.trunc.float_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000260, VkglTestCase_000260_1, VkglTestCase_000260_2);

#define VkglTestCase_000261_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000261_2 "nctions.common.trunc.float_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000261, VkglTestCase_000261_1, VkglTestCase_000261_2);

#define VkglTestCase_000262_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000262_2 "tions.common.trunc.float_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000262, VkglTestCase_000262_1, VkglTestCase_000262_2);

#define VkglTestCase_000263_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000263_2 "nctions.common.trunc.float_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000263, VkglTestCase_000263_1, VkglTestCase_000263_2);

#define VkglTestCase_000264_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000264_2 "unctions.common.trunc.float_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000264, VkglTestCase_000264_1, VkglTestCase_000264_2);

#define VkglTestCase_000265_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000265_2 "unctions.common.trunc.vec2_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000265, VkglTestCase_000265_1, VkglTestCase_000265_2);

#define VkglTestCase_000266_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000266_2 "ctions.common.trunc.vec2_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000266, VkglTestCase_000266_1, VkglTestCase_000266_2);

#define VkglTestCase_000267_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000267_2 "unctions.common.trunc.vec2_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000267, VkglTestCase_000267_1, VkglTestCase_000267_2);

#define VkglTestCase_000268_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000268_2 "functions.common.trunc.vec2_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000268, VkglTestCase_000268_1, VkglTestCase_000268_2);

#define VkglTestCase_000269_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000269_2 "nctions.common.trunc.vec2_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000269, VkglTestCase_000269_1, VkglTestCase_000269_2);

#define VkglTestCase_000270_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000270_2 "tions.common.trunc.vec2_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000270, VkglTestCase_000270_1, VkglTestCase_000270_2);

#define VkglTestCase_000271_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000271_2 "ctions.common.trunc.vec2_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000271, VkglTestCase_000271_1, VkglTestCase_000271_2);

#define VkglTestCase_000272_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000272_2 "nctions.common.trunc.vec2_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000272, VkglTestCase_000272_1, VkglTestCase_000272_2);

#define VkglTestCase_000273_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000273_2 "unctions.common.trunc.vec2_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000273, VkglTestCase_000273_1, VkglTestCase_000273_2);

#define VkglTestCase_000274_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000274_2 "ctions.common.trunc.vec2_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000274, VkglTestCase_000274_1, VkglTestCase_000274_2);

#define VkglTestCase_000275_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000275_2 "nctions.common.trunc.vec2_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000275, VkglTestCase_000275_1, VkglTestCase_000275_2);

#define VkglTestCase_000276_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000276_2 "unctions.common.trunc.vec2_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000276, VkglTestCase_000276_1, VkglTestCase_000276_2);

#define VkglTestCase_000277_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000277_2 "unctions.common.trunc.vec3_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000277, VkglTestCase_000277_1, VkglTestCase_000277_2);

#define VkglTestCase_000278_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000278_2 "ctions.common.trunc.vec3_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000278, VkglTestCase_000278_1, VkglTestCase_000278_2);

#define VkglTestCase_000279_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000279_2 "unctions.common.trunc.vec3_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000279, VkglTestCase_000279_1, VkglTestCase_000279_2);

#define VkglTestCase_000280_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000280_2 "functions.common.trunc.vec3_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000280, VkglTestCase_000280_1, VkglTestCase_000280_2);

#define VkglTestCase_000281_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000281_2 "nctions.common.trunc.vec3_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000281, VkglTestCase_000281_1, VkglTestCase_000281_2);

#define VkglTestCase_000282_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000282_2 "tions.common.trunc.vec3_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000282, VkglTestCase_000282_1, VkglTestCase_000282_2);

#define VkglTestCase_000283_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000283_2 "ctions.common.trunc.vec3_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000283, VkglTestCase_000283_1, VkglTestCase_000283_2);

#define VkglTestCase_000284_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000284_2 "nctions.common.trunc.vec3_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000284, VkglTestCase_000284_1, VkglTestCase_000284_2);

#define VkglTestCase_000285_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000285_2 "unctions.common.trunc.vec3_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000285, VkglTestCase_000285_1, VkglTestCase_000285_2);

#define VkglTestCase_000286_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000286_2 "ctions.common.trunc.vec3_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000286, VkglTestCase_000286_1, VkglTestCase_000286_2);

#define VkglTestCase_000287_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000287_2 "nctions.common.trunc.vec3_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000287, VkglTestCase_000287_1, VkglTestCase_000287_2);

#define VkglTestCase_000288_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000288_2 "unctions.common.trunc.vec3_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000288, VkglTestCase_000288_1, VkglTestCase_000288_2);

#define VkglTestCase_000289_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000289_2 "unctions.common.trunc.vec4_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000289, VkglTestCase_000289_1, VkglTestCase_000289_2);

#define VkglTestCase_000290_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000290_2 "ctions.common.trunc.vec4_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000290, VkglTestCase_000290_1, VkglTestCase_000290_2);

#define VkglTestCase_000291_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000291_2 "unctions.common.trunc.vec4_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000291, VkglTestCase_000291_1, VkglTestCase_000291_2);

#define VkglTestCase_000292_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000292_2 "functions.common.trunc.vec4_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000292, VkglTestCase_000292_1, VkglTestCase_000292_2);

#define VkglTestCase_000293_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000293_2 "nctions.common.trunc.vec4_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000293, VkglTestCase_000293_1, VkglTestCase_000293_2);

#define VkglTestCase_000294_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000294_2 "tions.common.trunc.vec4_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000294, VkglTestCase_000294_1, VkglTestCase_000294_2);

#define VkglTestCase_000295_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000295_2 "ctions.common.trunc.vec4_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000295, VkglTestCase_000295_1, VkglTestCase_000295_2);

#define VkglTestCase_000296_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000296_2 "nctions.common.trunc.vec4_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000296, VkglTestCase_000296_1, VkglTestCase_000296_2);

#define VkglTestCase_000297_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000297_2 "unctions.common.trunc.vec4_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000297, VkglTestCase_000297_1, VkglTestCase_000297_2);

#define VkglTestCase_000298_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000298_2 "ctions.common.trunc.vec4_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000298, VkglTestCase_000298_1, VkglTestCase_000298_2);

#define VkglTestCase_000299_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000299_2 "nctions.common.trunc.vec4_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000299, VkglTestCase_000299_1, VkglTestCase_000299_2);

#define VkglTestCase_000300_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000300_2 "unctions.common.trunc.vec4_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000300, VkglTestCase_000300_1, VkglTestCase_000300_2);
