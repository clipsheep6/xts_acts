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

#define VkglTestCase_000109_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000109_2 "unctions.common.sign.float_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000109, VkglTestCase_000109_1, VkglTestCase_000109_2);

#define VkglTestCase_000110_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000110_2 "ctions.common.sign.float_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000110, VkglTestCase_000110_1, VkglTestCase_000110_2);

#define VkglTestCase_000111_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000111_2 "unctions.common.sign.float_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000111, VkglTestCase_000111_1, VkglTestCase_000111_2);

#define VkglTestCase_000112_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000112_2 "functions.common.sign.float_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000112, VkglTestCase_000112_1, VkglTestCase_000112_2);

#define VkglTestCase_000113_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000113_2 "nctions.common.sign.float_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000113, VkglTestCase_000113_1, VkglTestCase_000113_2);

#define VkglTestCase_000114_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000114_2 "tions.common.sign.float_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000114, VkglTestCase_000114_1, VkglTestCase_000114_2);

#define VkglTestCase_000115_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000115_2 "ctions.common.sign.float_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000115, VkglTestCase_000115_1, VkglTestCase_000115_2);

#define VkglTestCase_000116_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000116_2 "nctions.common.sign.float_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000116, VkglTestCase_000116_1, VkglTestCase_000116_2);

#define VkglTestCase_000117_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000117_2 "unctions.common.sign.float_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000117, VkglTestCase_000117_1, VkglTestCase_000117_2);

#define VkglTestCase_000118_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000118_2 "ctions.common.sign.float_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000118, VkglTestCase_000118_1, VkglTestCase_000118_2);

#define VkglTestCase_000119_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000119_2 "nctions.common.sign.float_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000119, VkglTestCase_000119_1, VkglTestCase_000119_2);

#define VkglTestCase_000120_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000120_2 "unctions.common.sign.float_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000120, VkglTestCase_000120_1, VkglTestCase_000120_2);

#define VkglTestCase_000121_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000121_2 "functions.common.sign.vec2_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000121, VkglTestCase_000121_1, VkglTestCase_000121_2);

#define VkglTestCase_000122_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000122_2 "nctions.common.sign.vec2_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000122, VkglTestCase_000122_1, VkglTestCase_000122_2);

#define VkglTestCase_000123_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000123_2 "unctions.common.sign.vec2_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000123, VkglTestCase_000123_1, VkglTestCase_000123_2);

#define VkglTestCase_000124_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000124_2 "functions.common.sign.vec2_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000124, VkglTestCase_000124_1, VkglTestCase_000124_2);

#define VkglTestCase_000125_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000125_2 "nctions.common.sign.vec2_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000125, VkglTestCase_000125_1, VkglTestCase_000125_2);

#define VkglTestCase_000126_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000126_2 "tions.common.sign.vec2_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000126, VkglTestCase_000126_1, VkglTestCase_000126_2);

#define VkglTestCase_000127_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000127_2 "nctions.common.sign.vec2_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000127, VkglTestCase_000127_1, VkglTestCase_000127_2);

#define VkglTestCase_000128_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000128_2 "unctions.common.sign.vec2_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000128, VkglTestCase_000128_1, VkglTestCase_000128_2);

#define VkglTestCase_000129_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000129_2 "unctions.common.sign.vec2_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000129, VkglTestCase_000129_1, VkglTestCase_000129_2);

#define VkglTestCase_000130_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000130_2 "ctions.common.sign.vec2_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000130, VkglTestCase_000130_1, VkglTestCase_000130_2);

#define VkglTestCase_000131_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000131_2 "unctions.common.sign.vec2_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000131, VkglTestCase_000131_1, VkglTestCase_000131_2);

#define VkglTestCase_000132_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000132_2 "functions.common.sign.vec2_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000132, VkglTestCase_000132_1, VkglTestCase_000132_2);

#define VkglTestCase_000133_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000133_2 "functions.common.sign.vec3_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000133, VkglTestCase_000133_1, VkglTestCase_000133_2);

#define VkglTestCase_000134_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000134_2 "nctions.common.sign.vec3_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000134, VkglTestCase_000134_1, VkglTestCase_000134_2);

#define VkglTestCase_000135_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000135_2 "unctions.common.sign.vec3_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000135, VkglTestCase_000135_1, VkglTestCase_000135_2);

#define VkglTestCase_000136_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000136_2 "functions.common.sign.vec3_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000136, VkglTestCase_000136_1, VkglTestCase_000136_2);

#define VkglTestCase_000137_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000137_2 "nctions.common.sign.vec3_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000137, VkglTestCase_000137_1, VkglTestCase_000137_2);

#define VkglTestCase_000138_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000138_2 "tions.common.sign.vec3_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000138, VkglTestCase_000138_1, VkglTestCase_000138_2);

#define VkglTestCase_000139_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000139_2 "nctions.common.sign.vec3_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000139, VkglTestCase_000139_1, VkglTestCase_000139_2);

#define VkglTestCase_000140_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000140_2 "unctions.common.sign.vec3_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000140, VkglTestCase_000140_1, VkglTestCase_000140_2);

#define VkglTestCase_000141_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000141_2 "unctions.common.sign.vec3_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000141, VkglTestCase_000141_1, VkglTestCase_000141_2);

#define VkglTestCase_000142_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000142_2 "ctions.common.sign.vec3_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000142, VkglTestCase_000142_1, VkglTestCase_000142_2);

#define VkglTestCase_000143_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000143_2 "unctions.common.sign.vec3_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000143, VkglTestCase_000143_1, VkglTestCase_000143_2);

#define VkglTestCase_000144_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000144_2 "functions.common.sign.vec3_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000144, VkglTestCase_000144_1, VkglTestCase_000144_2);

#define VkglTestCase_000145_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000145_2 "functions.common.sign.vec4_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000145, VkglTestCase_000145_1, VkglTestCase_000145_2);

#define VkglTestCase_000146_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000146_2 "nctions.common.sign.vec4_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000146, VkglTestCase_000146_1, VkglTestCase_000146_2);

#define VkglTestCase_000147_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000147_2 "unctions.common.sign.vec4_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000147, VkglTestCase_000147_1, VkglTestCase_000147_2);

#define VkglTestCase_000148_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000148_2 "functions.common.sign.vec4_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000148, VkglTestCase_000148_1, VkglTestCase_000148_2);

#define VkglTestCase_000149_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000149_2 "nctions.common.sign.vec4_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000149, VkglTestCase_000149_1, VkglTestCase_000149_2);

#define VkglTestCase_000150_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000150_2 "tions.common.sign.vec4_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000150, VkglTestCase_000150_1, VkglTestCase_000150_2);

#define VkglTestCase_000151_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000151_2 "nctions.common.sign.vec4_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000151, VkglTestCase_000151_1, VkglTestCase_000151_2);

#define VkglTestCase_000152_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000152_2 "unctions.common.sign.vec4_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000152, VkglTestCase_000152_1, VkglTestCase_000152_2);

#define VkglTestCase_000153_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000153_2 "unctions.common.sign.vec4_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000153, VkglTestCase_000153_1, VkglTestCase_000153_2);

#define VkglTestCase_000154_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000154_2 "ctions.common.sign.vec4_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000154, VkglTestCase_000154_1, VkglTestCase_000154_2);

#define VkglTestCase_000155_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000155_2 "unctions.common.sign.vec4_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000155, VkglTestCase_000155_1, VkglTestCase_000155_2);

#define VkglTestCase_000156_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000156_2 "functions.common.sign.vec4_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000156, VkglTestCase_000156_1, VkglTestCase_000156_2);

#define VkglTestCase_000157_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000157_2 "functions.common.sign.int_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000157, VkglTestCase_000157_1, VkglTestCase_000157_2);

#define VkglTestCase_000158_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000158_2 "nctions.common.sign.int_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000158, VkglTestCase_000158_1, VkglTestCase_000158_2);

#define VkglTestCase_000159_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000159_2 "functions.common.sign.int_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000159, VkglTestCase_000159_1, VkglTestCase_000159_2);

#define VkglTestCase_000160_1 "dEQP-GLES31.functional.shaders.builtin"
#define VkglTestCase_000160_2 "_functions.common.sign.int_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000160, VkglTestCase_000160_1, VkglTestCase_000160_2);

#define VkglTestCase_000161_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000161_2 "unctions.common.sign.int_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000161, VkglTestCase_000161_1, VkglTestCase_000161_2);

#define VkglTestCase_000162_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000162_2 "ctions.common.sign.int_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000162, VkglTestCase_000162_1, VkglTestCase_000162_2);

#define VkglTestCase_000163_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000163_2 "nctions.common.sign.int_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000163, VkglTestCase_000163_1, VkglTestCase_000163_2);

#define VkglTestCase_000164_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000164_2 "unctions.common.sign.int_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000164, VkglTestCase_000164_1, VkglTestCase_000164_2);

#define VkglTestCase_000165_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000165_2 "functions.common.sign.int_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000165, VkglTestCase_000165_1, VkglTestCase_000165_2);

#define VkglTestCase_000166_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000166_2 "nctions.common.sign.int_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000166, VkglTestCase_000166_1, VkglTestCase_000166_2);

#define VkglTestCase_000167_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000167_2 "unctions.common.sign.int_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000167, VkglTestCase_000167_1, VkglTestCase_000167_2);

#define VkglTestCase_000168_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000168_2 "functions.common.sign.int_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000168, VkglTestCase_000168_1, VkglTestCase_000168_2);

#define VkglTestCase_000169_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000169_2 "unctions.common.sign.ivec2_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000169, VkglTestCase_000169_1, VkglTestCase_000169_2);

#define VkglTestCase_000170_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000170_2 "ctions.common.sign.ivec2_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000170, VkglTestCase_000170_1, VkglTestCase_000170_2);

#define VkglTestCase_000171_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000171_2 "unctions.common.sign.ivec2_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000171, VkglTestCase_000171_1, VkglTestCase_000171_2);

#define VkglTestCase_000172_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000172_2 "functions.common.sign.ivec2_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000172, VkglTestCase_000172_1, VkglTestCase_000172_2);

#define VkglTestCase_000173_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000173_2 "nctions.common.sign.ivec2_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000173, VkglTestCase_000173_1, VkglTestCase_000173_2);

#define VkglTestCase_000174_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000174_2 "tions.common.sign.ivec2_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000174, VkglTestCase_000174_1, VkglTestCase_000174_2);

#define VkglTestCase_000175_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000175_2 "ctions.common.sign.ivec2_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000175, VkglTestCase_000175_1, VkglTestCase_000175_2);

#define VkglTestCase_000176_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000176_2 "nctions.common.sign.ivec2_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000176, VkglTestCase_000176_1, VkglTestCase_000176_2);

#define VkglTestCase_000177_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000177_2 "unctions.common.sign.ivec2_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000177, VkglTestCase_000177_1, VkglTestCase_000177_2);

#define VkglTestCase_000178_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000178_2 "ctions.common.sign.ivec2_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000178, VkglTestCase_000178_1, VkglTestCase_000178_2);

#define VkglTestCase_000179_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000179_2 "nctions.common.sign.ivec2_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000179, VkglTestCase_000179_1, VkglTestCase_000179_2);

#define VkglTestCase_000180_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000180_2 "unctions.common.sign.ivec2_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000180, VkglTestCase_000180_1, VkglTestCase_000180_2);

#define VkglTestCase_000181_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000181_2 "unctions.common.sign.ivec3_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000181, VkglTestCase_000181_1, VkglTestCase_000181_2);

#define VkglTestCase_000182_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000182_2 "ctions.common.sign.ivec3_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000182, VkglTestCase_000182_1, VkglTestCase_000182_2);

#define VkglTestCase_000183_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000183_2 "unctions.common.sign.ivec3_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000183, VkglTestCase_000183_1, VkglTestCase_000183_2);

#define VkglTestCase_000184_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000184_2 "functions.common.sign.ivec3_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000184, VkglTestCase_000184_1, VkglTestCase_000184_2);

#define VkglTestCase_000185_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000185_2 "nctions.common.sign.ivec3_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000185, VkglTestCase_000185_1, VkglTestCase_000185_2);

#define VkglTestCase_000186_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000186_2 "tions.common.sign.ivec3_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000186, VkglTestCase_000186_1, VkglTestCase_000186_2);

#define VkglTestCase_000187_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000187_2 "ctions.common.sign.ivec3_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000187, VkglTestCase_000187_1, VkglTestCase_000187_2);

#define VkglTestCase_000188_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000188_2 "nctions.common.sign.ivec3_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000188, VkglTestCase_000188_1, VkglTestCase_000188_2);

#define VkglTestCase_000189_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000189_2 "unctions.common.sign.ivec3_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000189, VkglTestCase_000189_1, VkglTestCase_000189_2);

#define VkglTestCase_000190_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000190_2 "ctions.common.sign.ivec3_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000190, VkglTestCase_000190_1, VkglTestCase_000190_2);

#define VkglTestCase_000191_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000191_2 "nctions.common.sign.ivec3_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000191, VkglTestCase_000191_1, VkglTestCase_000191_2);

#define VkglTestCase_000192_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000192_2 "unctions.common.sign.ivec3_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000192, VkglTestCase_000192_1, VkglTestCase_000192_2);

#define VkglTestCase_000193_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000193_2 "unctions.common.sign.ivec4_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000193, VkglTestCase_000193_1, VkglTestCase_000193_2);

#define VkglTestCase_000194_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000194_2 "ctions.common.sign.ivec4_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000194, VkglTestCase_000194_1, VkglTestCase_000194_2);

#define VkglTestCase_000195_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000195_2 "unctions.common.sign.ivec4_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000195, VkglTestCase_000195_1, VkglTestCase_000195_2);

#define VkglTestCase_000196_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000196_2 "functions.common.sign.ivec4_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000196, VkglTestCase_000196_1, VkglTestCase_000196_2);

#define VkglTestCase_000197_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000197_2 "nctions.common.sign.ivec4_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000197, VkglTestCase_000197_1, VkglTestCase_000197_2);

#define VkglTestCase_000198_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000198_2 "tions.common.sign.ivec4_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000198, VkglTestCase_000198_1, VkglTestCase_000198_2);

#define VkglTestCase_000199_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000199_2 "ctions.common.sign.ivec4_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000199, VkglTestCase_000199_1, VkglTestCase_000199_2);

#define VkglTestCase_000200_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000200_2 "nctions.common.sign.ivec4_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000200, VkglTestCase_000200_1, VkglTestCase_000200_2);

#define VkglTestCase_000201_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000201_2 "unctions.common.sign.ivec4_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000201, VkglTestCase_000201_1, VkglTestCase_000201_2);

#define VkglTestCase_000202_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000202_2 "ctions.common.sign.ivec4_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000202, VkglTestCase_000202_1, VkglTestCase_000202_2);

#define VkglTestCase_000203_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000203_2 "nctions.common.sign.ivec4_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000203, VkglTestCase_000203_1, VkglTestCase_000203_2);

#define VkglTestCase_000204_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000204_2 "unctions.common.sign.ivec4_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000204, VkglTestCase_000204_1, VkglTestCase_000204_2);
