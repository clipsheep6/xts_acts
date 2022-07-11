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

#define VkglTestCase_000205_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000205_2 "unctions.common.floor.float_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000205, VkglTestCase_000205_1, VkglTestCase_000205_2);

#define VkglTestCase_000206_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000206_2 "ctions.common.floor.float_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000206, VkglTestCase_000206_1, VkglTestCase_000206_2);

#define VkglTestCase_000207_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000207_2 "nctions.common.floor.float_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000207, VkglTestCase_000207_1, VkglTestCase_000207_2);

#define VkglTestCase_000208_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000208_2 "unctions.common.floor.float_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000208, VkglTestCase_000208_1, VkglTestCase_000208_2);

#define VkglTestCase_000209_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000209_2 "ctions.common.floor.float_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000209, VkglTestCase_000209_1, VkglTestCase_000209_2);

#define VkglTestCase_000210_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_000210_2 "ions.common.floor.float_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000210, VkglTestCase_000210_1, VkglTestCase_000210_2);

#define VkglTestCase_000211_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000211_2 "ctions.common.floor.float_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000211, VkglTestCase_000211_1, VkglTestCase_000211_2);

#define VkglTestCase_000212_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000212_2 "nctions.common.floor.float_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000212, VkglTestCase_000212_1, VkglTestCase_000212_2);

#define VkglTestCase_000213_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000213_2 "nctions.common.floor.float_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000213, VkglTestCase_000213_1, VkglTestCase_000213_2);

#define VkglTestCase_000214_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000214_2 "tions.common.floor.float_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000214, VkglTestCase_000214_1, VkglTestCase_000214_2);

#define VkglTestCase_000215_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000215_2 "nctions.common.floor.float_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000215, VkglTestCase_000215_1, VkglTestCase_000215_2);

#define VkglTestCase_000216_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000216_2 "unctions.common.floor.float_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000216, VkglTestCase_000216_1, VkglTestCase_000216_2);

#define VkglTestCase_000217_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000217_2 "unctions.common.floor.vec2_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000217, VkglTestCase_000217_1, VkglTestCase_000217_2);

#define VkglTestCase_000218_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000218_2 "ctions.common.floor.vec2_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000218, VkglTestCase_000218_1, VkglTestCase_000218_2);

#define VkglTestCase_000219_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000219_2 "unctions.common.floor.vec2_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000219, VkglTestCase_000219_1, VkglTestCase_000219_2);

#define VkglTestCase_000220_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000220_2 "functions.common.floor.vec2_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000220, VkglTestCase_000220_1, VkglTestCase_000220_2);

#define VkglTestCase_000221_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000221_2 "nctions.common.floor.vec2_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000221, VkglTestCase_000221_1, VkglTestCase_000221_2);

#define VkglTestCase_000222_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000222_2 "tions.common.floor.vec2_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000222, VkglTestCase_000222_1, VkglTestCase_000222_2);

#define VkglTestCase_000223_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000223_2 "ctions.common.floor.vec2_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000223, VkglTestCase_000223_1, VkglTestCase_000223_2);

#define VkglTestCase_000224_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000224_2 "nctions.common.floor.vec2_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000224, VkglTestCase_000224_1, VkglTestCase_000224_2);

#define VkglTestCase_000225_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000225_2 "unctions.common.floor.vec2_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000225, VkglTestCase_000225_1, VkglTestCase_000225_2);

#define VkglTestCase_000226_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000226_2 "ctions.common.floor.vec2_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000226, VkglTestCase_000226_1, VkglTestCase_000226_2);

#define VkglTestCase_000227_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000227_2 "nctions.common.floor.vec2_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000227, VkglTestCase_000227_1, VkglTestCase_000227_2);

#define VkglTestCase_000228_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000228_2 "unctions.common.floor.vec2_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000228, VkglTestCase_000228_1, VkglTestCase_000228_2);

#define VkglTestCase_000229_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000229_2 "unctions.common.floor.vec3_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000229, VkglTestCase_000229_1, VkglTestCase_000229_2);

#define VkglTestCase_000230_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000230_2 "ctions.common.floor.vec3_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000230, VkglTestCase_000230_1, VkglTestCase_000230_2);

#define VkglTestCase_000231_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000231_2 "unctions.common.floor.vec3_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000231, VkglTestCase_000231_1, VkglTestCase_000231_2);

#define VkglTestCase_000232_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000232_2 "functions.common.floor.vec3_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000232, VkglTestCase_000232_1, VkglTestCase_000232_2);

#define VkglTestCase_000233_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000233_2 "nctions.common.floor.vec3_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000233, VkglTestCase_000233_1, VkglTestCase_000233_2);

#define VkglTestCase_000234_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000234_2 "tions.common.floor.vec3_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000234, VkglTestCase_000234_1, VkglTestCase_000234_2);

#define VkglTestCase_000235_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000235_2 "ctions.common.floor.vec3_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000235, VkglTestCase_000235_1, VkglTestCase_000235_2);

#define VkglTestCase_000236_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000236_2 "nctions.common.floor.vec3_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000236, VkglTestCase_000236_1, VkglTestCase_000236_2);

#define VkglTestCase_000237_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000237_2 "unctions.common.floor.vec3_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000237, VkglTestCase_000237_1, VkglTestCase_000237_2);

#define VkglTestCase_000238_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000238_2 "ctions.common.floor.vec3_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000238, VkglTestCase_000238_1, VkglTestCase_000238_2);

#define VkglTestCase_000239_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000239_2 "nctions.common.floor.vec3_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000239, VkglTestCase_000239_1, VkglTestCase_000239_2);

#define VkglTestCase_000240_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000240_2 "unctions.common.floor.vec3_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000240, VkglTestCase_000240_1, VkglTestCase_000240_2);

#define VkglTestCase_000241_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000241_2 "unctions.common.floor.vec4_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000241, VkglTestCase_000241_1, VkglTestCase_000241_2);

#define VkglTestCase_000242_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000242_2 "ctions.common.floor.vec4_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000242, VkglTestCase_000242_1, VkglTestCase_000242_2);

#define VkglTestCase_000243_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000243_2 "unctions.common.floor.vec4_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000243, VkglTestCase_000243_1, VkglTestCase_000243_2);

#define VkglTestCase_000244_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000244_2 "functions.common.floor.vec4_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000244, VkglTestCase_000244_1, VkglTestCase_000244_2);

#define VkglTestCase_000245_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000245_2 "nctions.common.floor.vec4_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000245, VkglTestCase_000245_1, VkglTestCase_000245_2);

#define VkglTestCase_000246_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000246_2 "tions.common.floor.vec4_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000246, VkglTestCase_000246_1, VkglTestCase_000246_2);

#define VkglTestCase_000247_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000247_2 "ctions.common.floor.vec4_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000247, VkglTestCase_000247_1, VkglTestCase_000247_2);

#define VkglTestCase_000248_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000248_2 "nctions.common.floor.vec4_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000248, VkglTestCase_000248_1, VkglTestCase_000248_2);

#define VkglTestCase_000249_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000249_2 "unctions.common.floor.vec4_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000249, VkglTestCase_000249_1, VkglTestCase_000249_2);

#define VkglTestCase_000250_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000250_2 "ctions.common.floor.vec4_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000250, VkglTestCase_000250_1, VkglTestCase_000250_2);

#define VkglTestCase_000251_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000251_2 "nctions.common.floor.vec4_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000251, VkglTestCase_000251_1, VkglTestCase_000251_2);

#define VkglTestCase_000252_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000252_2 "unctions.common.floor.vec4_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000252, VkglTestCase_000252_1, VkglTestCase_000252_2);
