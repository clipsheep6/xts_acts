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

#define VkglTestCase_000877_1 "dEQP-GLES31.functional.shaders.builtin"
#define VkglTestCase_000877_2 "_functions.common.fma.float_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000877, VkglTestCase_000877_1, VkglTestCase_000877_2);

#define VkglTestCase_000878_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000878_2 "functions.common.fma.float_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000878, VkglTestCase_000878_1, VkglTestCase_000878_2);

#define VkglTestCase_000879_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000879_2 "functions.common.fma.float_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000879, VkglTestCase_000879_1, VkglTestCase_000879_2);

#define VkglTestCase_000880_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000880_2 "nctions.common.fma.float_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000880, VkglTestCase_000880_1, VkglTestCase_000880_2);

#define VkglTestCase_000881_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000881_2 "unctions.common.fma.float_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000881, VkglTestCase_000881_1, VkglTestCase_000881_2);

#define VkglTestCase_000882_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000882_2 "functions.common.fma.float_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000882, VkglTestCase_000882_1, VkglTestCase_000882_2);

#define VkglTestCase_000883_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000883_2 "unctions.common.fma.float_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000883, VkglTestCase_000883_1, VkglTestCase_000883_2);

#define VkglTestCase_000884_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000884_2 "nctions.common.fma.float_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000884, VkglTestCase_000884_1, VkglTestCase_000884_2);

#define VkglTestCase_000885_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000885_2 "nctions.common.fma.float_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000885, VkglTestCase_000885_1, VkglTestCase_000885_2);

#define VkglTestCase_000886_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000886_2 "tions.common.fma.float_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000886, VkglTestCase_000886_1, VkglTestCase_000886_2);

#define VkglTestCase_000887_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000887_2 "nctions.common.fma.float_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000887, VkglTestCase_000887_1, VkglTestCase_000887_2);

#define VkglTestCase_000888_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000888_2 "unctions.common.fma.float_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000888, VkglTestCase_000888_1, VkglTestCase_000888_2);

#define VkglTestCase_000889_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000889_2 "functions.common.fma.float_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000889, VkglTestCase_000889_1, VkglTestCase_000889_2);

#define VkglTestCase_000890_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000890_2 "unctions.common.fma.float_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000890, VkglTestCase_000890_1, VkglTestCase_000890_2);

#define VkglTestCase_000891_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000891_2 "unctions.common.fma.float_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000891, VkglTestCase_000891_1, VkglTestCase_000891_2);

#define VkglTestCase_000892_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000892_2 "ctions.common.fma.float_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000892, VkglTestCase_000892_1, VkglTestCase_000892_2);

#define VkglTestCase_000893_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000893_2 "unctions.common.fma.float_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000893, VkglTestCase_000893_1, VkglTestCase_000893_2);

#define VkglTestCase_000894_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000894_2 "functions.common.fma.float_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000894, VkglTestCase_000894_1, VkglTestCase_000894_2);

#define VkglTestCase_000895_1 "dEQP-GLES31.functional.shaders.builtin"
#define VkglTestCase_000895_2 "_functions.common.fma.vec2_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000895, VkglTestCase_000895_1, VkglTestCase_000895_2);

#define VkglTestCase_000896_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000896_2 "functions.common.fma.vec2_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000896, VkglTestCase_000896_1, VkglTestCase_000896_2);

#define VkglTestCase_000897_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000897_2 "functions.common.fma.vec2_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000897, VkglTestCase_000897_1, VkglTestCase_000897_2);

#define VkglTestCase_000898_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000898_2 "nctions.common.fma.vec2_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000898, VkglTestCase_000898_1, VkglTestCase_000898_2);

#define VkglTestCase_000899_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000899_2 "functions.common.fma.vec2_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000899, VkglTestCase_000899_1, VkglTestCase_000899_2);

#define VkglTestCase_000900_1 "dEQP-GLES31.functional.shaders.builtin"
#define VkglTestCase_000900_2 "_functions.common.fma.vec2_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000900, VkglTestCase_000900_1, VkglTestCase_000900_2);

#define VkglTestCase_000901_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000901_2 "functions.common.fma.vec2_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000901, VkglTestCase_000901_1, VkglTestCase_000901_2);

#define VkglTestCase_000902_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000902_2 "unctions.common.fma.vec2_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000902, VkglTestCase_000902_1, VkglTestCase_000902_2);

#define VkglTestCase_000903_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000903_2 "unctions.common.fma.vec2_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000903, VkglTestCase_000903_1, VkglTestCase_000903_2);

#define VkglTestCase_000904_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000904_2 "ctions.common.fma.vec2_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000904, VkglTestCase_000904_1, VkglTestCase_000904_2);

#define VkglTestCase_000905_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000905_2 "nctions.common.fma.vec2_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000905, VkglTestCase_000905_1, VkglTestCase_000905_2);

#define VkglTestCase_000906_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000906_2 "unctions.common.fma.vec2_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000906, VkglTestCase_000906_1, VkglTestCase_000906_2);

#define VkglTestCase_000907_1 "dEQP-GLES31.functional.shaders.builtin"
#define VkglTestCase_000907_2 "_functions.common.fma.vec2_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000907, VkglTestCase_000907_1, VkglTestCase_000907_2);

#define VkglTestCase_000908_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000908_2 "functions.common.fma.vec2_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000908, VkglTestCase_000908_1, VkglTestCase_000908_2);

#define VkglTestCase_000909_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000909_2 "functions.common.fma.vec2_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000909, VkglTestCase_000909_1, VkglTestCase_000909_2);

#define VkglTestCase_000910_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000910_2 "nctions.common.fma.vec2_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000910, VkglTestCase_000910_1, VkglTestCase_000910_2);

#define VkglTestCase_000911_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000911_2 "unctions.common.fma.vec2_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000911, VkglTestCase_000911_1, VkglTestCase_000911_2);

#define VkglTestCase_000912_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000912_2 "functions.common.fma.vec2_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000912, VkglTestCase_000912_1, VkglTestCase_000912_2);

#define VkglTestCase_000913_1 "dEQP-GLES31.functional.shaders.builtin"
#define VkglTestCase_000913_2 "_functions.common.fma.vec3_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000913, VkglTestCase_000913_1, VkglTestCase_000913_2);

#define VkglTestCase_000914_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000914_2 "functions.common.fma.vec3_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000914, VkglTestCase_000914_1, VkglTestCase_000914_2);

#define VkglTestCase_000915_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000915_2 "functions.common.fma.vec3_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000915, VkglTestCase_000915_1, VkglTestCase_000915_2);

#define VkglTestCase_000916_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000916_2 "nctions.common.fma.vec3_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000916, VkglTestCase_000916_1, VkglTestCase_000916_2);

#define VkglTestCase_000917_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000917_2 "functions.common.fma.vec3_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000917, VkglTestCase_000917_1, VkglTestCase_000917_2);

#define VkglTestCase_000918_1 "dEQP-GLES31.functional.shaders.builtin"
#define VkglTestCase_000918_2 "_functions.common.fma.vec3_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000918, VkglTestCase_000918_1, VkglTestCase_000918_2);

#define VkglTestCase_000919_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000919_2 "functions.common.fma.vec3_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000919, VkglTestCase_000919_1, VkglTestCase_000919_2);

#define VkglTestCase_000920_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000920_2 "unctions.common.fma.vec3_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000920, VkglTestCase_000920_1, VkglTestCase_000920_2);

#define VkglTestCase_000921_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000921_2 "unctions.common.fma.vec3_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000921, VkglTestCase_000921_1, VkglTestCase_000921_2);

#define VkglTestCase_000922_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000922_2 "ctions.common.fma.vec3_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000922, VkglTestCase_000922_1, VkglTestCase_000922_2);

#define VkglTestCase_000923_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000923_2 "nctions.common.fma.vec3_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000923, VkglTestCase_000923_1, VkglTestCase_000923_2);

#define VkglTestCase_000924_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000924_2 "unctions.common.fma.vec3_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000924, VkglTestCase_000924_1, VkglTestCase_000924_2);

#define VkglTestCase_000925_1 "dEQP-GLES31.functional.shaders.builtin"
#define VkglTestCase_000925_2 "_functions.common.fma.vec3_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000925, VkglTestCase_000925_1, VkglTestCase_000925_2);

#define VkglTestCase_000926_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000926_2 "functions.common.fma.vec3_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000926, VkglTestCase_000926_1, VkglTestCase_000926_2);

#define VkglTestCase_000927_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000927_2 "functions.common.fma.vec3_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000927, VkglTestCase_000927_1, VkglTestCase_000927_2);

#define VkglTestCase_000928_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000928_2 "nctions.common.fma.vec3_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000928, VkglTestCase_000928_1, VkglTestCase_000928_2);

#define VkglTestCase_000929_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000929_2 "unctions.common.fma.vec3_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000929, VkglTestCase_000929_1, VkglTestCase_000929_2);

#define VkglTestCase_000930_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000930_2 "functions.common.fma.vec3_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000930, VkglTestCase_000930_1, VkglTestCase_000930_2);

#define VkglTestCase_000931_1 "dEQP-GLES31.functional.shaders.builtin"
#define VkglTestCase_000931_2 "_functions.common.fma.vec4_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000931, VkglTestCase_000931_1, VkglTestCase_000931_2);

#define VkglTestCase_000932_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000932_2 "functions.common.fma.vec4_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000932, VkglTestCase_000932_1, VkglTestCase_000932_2);

#define VkglTestCase_000933_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000933_2 "functions.common.fma.vec4_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000933, VkglTestCase_000933_1, VkglTestCase_000933_2);

#define VkglTestCase_000934_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000934_2 "nctions.common.fma.vec4_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000934, VkglTestCase_000934_1, VkglTestCase_000934_2);

#define VkglTestCase_000935_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000935_2 "functions.common.fma.vec4_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000935, VkglTestCase_000935_1, VkglTestCase_000935_2);

#define VkglTestCase_000936_1 "dEQP-GLES31.functional.shaders.builtin"
#define VkglTestCase_000936_2 "_functions.common.fma.vec4_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000936, VkglTestCase_000936_1, VkglTestCase_000936_2);

#define VkglTestCase_000937_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000937_2 "functions.common.fma.vec4_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000937, VkglTestCase_000937_1, VkglTestCase_000937_2);

#define VkglTestCase_000938_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000938_2 "unctions.common.fma.vec4_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000938, VkglTestCase_000938_1, VkglTestCase_000938_2);

#define VkglTestCase_000939_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000939_2 "unctions.common.fma.vec4_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000939, VkglTestCase_000939_1, VkglTestCase_000939_2);

#define VkglTestCase_000940_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000940_2 "ctions.common.fma.vec4_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000940, VkglTestCase_000940_1, VkglTestCase_000940_2);

#define VkglTestCase_000941_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000941_2 "nctions.common.fma.vec4_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000941, VkglTestCase_000941_1, VkglTestCase_000941_2);

#define VkglTestCase_000942_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000942_2 "unctions.common.fma.vec4_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000942, VkglTestCase_000942_1, VkglTestCase_000942_2);

#define VkglTestCase_000943_1 "dEQP-GLES31.functional.shaders.builtin"
#define VkglTestCase_000943_2 "_functions.common.fma.vec4_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000943, VkglTestCase_000943_1, VkglTestCase_000943_2);

#define VkglTestCase_000944_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000944_2 "functions.common.fma.vec4_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000944, VkglTestCase_000944_1, VkglTestCase_000944_2);

#define VkglTestCase_000945_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000945_2 "functions.common.fma.vec4_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000945, VkglTestCase_000945_1, VkglTestCase_000945_2);

#define VkglTestCase_000946_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000946_2 "nctions.common.fma.vec4_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000946, VkglTestCase_000946_1, VkglTestCase_000946_2);

#define VkglTestCase_000947_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000947_2 "unctions.common.fma.vec4_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000947, VkglTestCase_000947_1, VkglTestCase_000947_2);

#define VkglTestCase_000948_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000948_2 "functions.common.fma.vec4_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000948, VkglTestCase_000948_1, VkglTestCase_000948_2);
