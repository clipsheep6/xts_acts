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

#define VkglTestCase_000301_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000301_2 "unctions.common.round.float_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000301, VkglTestCase_000301_1, VkglTestCase_000301_2);

#define VkglTestCase_000302_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000302_2 "ctions.common.round.float_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000302, VkglTestCase_000302_1, VkglTestCase_000302_2);

#define VkglTestCase_000303_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000303_2 "nctions.common.round.float_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000303, VkglTestCase_000303_1, VkglTestCase_000303_2);

#define VkglTestCase_000304_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000304_2 "unctions.common.round.float_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000304, VkglTestCase_000304_1, VkglTestCase_000304_2);

#define VkglTestCase_000305_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000305_2 "ctions.common.round.float_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000305, VkglTestCase_000305_1, VkglTestCase_000305_2);

#define VkglTestCase_000306_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_000306_2 "ions.common.round.float_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000306, VkglTestCase_000306_1, VkglTestCase_000306_2);

#define VkglTestCase_000307_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000307_2 "ctions.common.round.float_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000307, VkglTestCase_000307_1, VkglTestCase_000307_2);

#define VkglTestCase_000308_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000308_2 "nctions.common.round.float_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000308, VkglTestCase_000308_1, VkglTestCase_000308_2);

#define VkglTestCase_000309_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000309_2 "nctions.common.round.float_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000309, VkglTestCase_000309_1, VkglTestCase_000309_2);

#define VkglTestCase_000310_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000310_2 "tions.common.round.float_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000310, VkglTestCase_000310_1, VkglTestCase_000310_2);

#define VkglTestCase_000311_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000311_2 "nctions.common.round.float_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000311, VkglTestCase_000311_1, VkglTestCase_000311_2);

#define VkglTestCase_000312_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000312_2 "unctions.common.round.float_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000312, VkglTestCase_000312_1, VkglTestCase_000312_2);

#define VkglTestCase_000313_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000313_2 "unctions.common.round.vec2_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000313, VkglTestCase_000313_1, VkglTestCase_000313_2);

#define VkglTestCase_000314_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000314_2 "ctions.common.round.vec2_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000314, VkglTestCase_000314_1, VkglTestCase_000314_2);

#define VkglTestCase_000315_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000315_2 "unctions.common.round.vec2_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000315, VkglTestCase_000315_1, VkglTestCase_000315_2);

#define VkglTestCase_000316_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000316_2 "functions.common.round.vec2_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000316, VkglTestCase_000316_1, VkglTestCase_000316_2);

#define VkglTestCase_000317_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000317_2 "nctions.common.round.vec2_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000317, VkglTestCase_000317_1, VkglTestCase_000317_2);

#define VkglTestCase_000318_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000318_2 "tions.common.round.vec2_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000318, VkglTestCase_000318_1, VkglTestCase_000318_2);

#define VkglTestCase_000319_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000319_2 "ctions.common.round.vec2_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000319, VkglTestCase_000319_1, VkglTestCase_000319_2);

#define VkglTestCase_000320_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000320_2 "nctions.common.round.vec2_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000320, VkglTestCase_000320_1, VkglTestCase_000320_2);

#define VkglTestCase_000321_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000321_2 "unctions.common.round.vec2_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000321, VkglTestCase_000321_1, VkglTestCase_000321_2);

#define VkglTestCase_000322_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000322_2 "ctions.common.round.vec2_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000322, VkglTestCase_000322_1, VkglTestCase_000322_2);

#define VkglTestCase_000323_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000323_2 "nctions.common.round.vec2_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000323, VkglTestCase_000323_1, VkglTestCase_000323_2);

#define VkglTestCase_000324_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000324_2 "unctions.common.round.vec2_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000324, VkglTestCase_000324_1, VkglTestCase_000324_2);

#define VkglTestCase_000325_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000325_2 "unctions.common.round.vec3_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000325, VkglTestCase_000325_1, VkglTestCase_000325_2);

#define VkglTestCase_000326_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000326_2 "ctions.common.round.vec3_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000326, VkglTestCase_000326_1, VkglTestCase_000326_2);

#define VkglTestCase_000327_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000327_2 "unctions.common.round.vec3_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000327, VkglTestCase_000327_1, VkglTestCase_000327_2);

#define VkglTestCase_000328_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000328_2 "functions.common.round.vec3_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000328, VkglTestCase_000328_1, VkglTestCase_000328_2);

#define VkglTestCase_000329_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000329_2 "nctions.common.round.vec3_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000329, VkglTestCase_000329_1, VkglTestCase_000329_2);

#define VkglTestCase_000330_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000330_2 "tions.common.round.vec3_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000330, VkglTestCase_000330_1, VkglTestCase_000330_2);

#define VkglTestCase_000331_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000331_2 "ctions.common.round.vec3_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000331, VkglTestCase_000331_1, VkglTestCase_000331_2);

#define VkglTestCase_000332_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000332_2 "nctions.common.round.vec3_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000332, VkglTestCase_000332_1, VkglTestCase_000332_2);

#define VkglTestCase_000333_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000333_2 "unctions.common.round.vec3_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000333, VkglTestCase_000333_1, VkglTestCase_000333_2);

#define VkglTestCase_000334_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000334_2 "ctions.common.round.vec3_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000334, VkglTestCase_000334_1, VkglTestCase_000334_2);

#define VkglTestCase_000335_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000335_2 "nctions.common.round.vec3_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000335, VkglTestCase_000335_1, VkglTestCase_000335_2);

#define VkglTestCase_000336_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000336_2 "unctions.common.round.vec3_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000336, VkglTestCase_000336_1, VkglTestCase_000336_2);

#define VkglTestCase_000337_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000337_2 "unctions.common.round.vec4_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000337, VkglTestCase_000337_1, VkglTestCase_000337_2);

#define VkglTestCase_000338_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000338_2 "ctions.common.round.vec4_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000338, VkglTestCase_000338_1, VkglTestCase_000338_2);

#define VkglTestCase_000339_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000339_2 "unctions.common.round.vec4_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000339, VkglTestCase_000339_1, VkglTestCase_000339_2);

#define VkglTestCase_000340_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000340_2 "functions.common.round.vec4_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000340, VkglTestCase_000340_1, VkglTestCase_000340_2);

#define VkglTestCase_000341_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000341_2 "nctions.common.round.vec4_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000341, VkglTestCase_000341_1, VkglTestCase_000341_2);

#define VkglTestCase_000342_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000342_2 "tions.common.round.vec4_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000342, VkglTestCase_000342_1, VkglTestCase_000342_2);

#define VkglTestCase_000343_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000343_2 "ctions.common.round.vec4_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000343, VkglTestCase_000343_1, VkglTestCase_000343_2);

#define VkglTestCase_000344_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000344_2 "nctions.common.round.vec4_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000344, VkglTestCase_000344_1, VkglTestCase_000344_2);

#define VkglTestCase_000345_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000345_2 "unctions.common.round.vec4_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000345, VkglTestCase_000345_1, VkglTestCase_000345_2);

#define VkglTestCase_000346_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000346_2 "ctions.common.round.vec4_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000346, VkglTestCase_000346_1, VkglTestCase_000346_2);

#define VkglTestCase_000347_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000347_2 "nctions.common.round.vec4_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000347, VkglTestCase_000347_1, VkglTestCase_000347_2);

#define VkglTestCase_000348_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000348_2 "unctions.common.round.vec4_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000348, VkglTestCase_000348_1, VkglTestCase_000348_2);
