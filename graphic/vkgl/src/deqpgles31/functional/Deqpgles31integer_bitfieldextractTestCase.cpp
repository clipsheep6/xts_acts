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
#include "../ActsDeqpgles310002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001233_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001233_2 "ions.integer.bitfieldextract.int_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001233, VkglTestCase_001233_1, VkglTestCase_001233_2);

#define VkglTestCase_001234_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001234_2 "ons.integer.bitfieldextract.int_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001234, VkglTestCase_001234_1, VkglTestCase_001234_2);

#define VkglTestCase_001235_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001235_2 "ons.integer.bitfieldextract.int_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001235, VkglTestCase_001235_1, VkglTestCase_001235_2);

#define VkglTestCase_001236_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001236_2 "s.integer.bitfieldextract.int_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001236, VkglTestCase_001236_1, VkglTestCase_001236_2);

#define VkglTestCase_001237_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001237_2 "ons.integer.bitfieldextract.int_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001237, VkglTestCase_001237_1, VkglTestCase_001237_2);

#define VkglTestCase_001238_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001238_2 "ions.integer.bitfieldextract.int_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001238, VkglTestCase_001238_1, VkglTestCase_001238_2);

#define VkglTestCase_001239_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001239_2 "ons.integer.bitfieldextract.int_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001239, VkglTestCase_001239_1, VkglTestCase_001239_2);

#define VkglTestCase_001240_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001240_2 "ns.integer.bitfieldextract.int_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001240, VkglTestCase_001240_1, VkglTestCase_001240_2);

#define VkglTestCase_001241_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001241_2 "ns.integer.bitfieldextract.int_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001241, VkglTestCase_001241_1, VkglTestCase_001241_2);

#define VkglTestCase_001242_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001242_2 ".integer.bitfieldextract.int_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001242, VkglTestCase_001242_1, VkglTestCase_001242_2);

#define VkglTestCase_001243_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001243_2 "s.integer.bitfieldextract.int_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001243, VkglTestCase_001243_1, VkglTestCase_001243_2);

#define VkglTestCase_001244_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001244_2 "ns.integer.bitfieldextract.int_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001244, VkglTestCase_001244_1, VkglTestCase_001244_2);

#define VkglTestCase_001245_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001245_2 "ions.integer.bitfieldextract.int_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001245, VkglTestCase_001245_1, VkglTestCase_001245_2);

#define VkglTestCase_001246_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001246_2 "ons.integer.bitfieldextract.int_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001246, VkglTestCase_001246_1, VkglTestCase_001246_2);

#define VkglTestCase_001247_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001247_2 "ons.integer.bitfieldextract.int_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001247, VkglTestCase_001247_1, VkglTestCase_001247_2);

#define VkglTestCase_001248_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001248_2 "s.integer.bitfieldextract.int_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001248, VkglTestCase_001248_1, VkglTestCase_001248_2);

#define VkglTestCase_001249_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001249_2 "ns.integer.bitfieldextract.int_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001249, VkglTestCase_001249_1, VkglTestCase_001249_2);

#define VkglTestCase_001250_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001250_2 "ons.integer.bitfieldextract.int_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001250, VkglTestCase_001250_1, VkglTestCase_001250_2);

#define VkglTestCase_001251_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001251_2 "ons.integer.bitfieldextract.ivec2_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001251, VkglTestCase_001251_1, VkglTestCase_001251_2);

#define VkglTestCase_001252_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001252_2 "ns.integer.bitfieldextract.ivec2_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001252, VkglTestCase_001252_1, VkglTestCase_001252_2);

#define VkglTestCase_001253_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001253_2 "ns.integer.bitfieldextract.ivec2_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001253, VkglTestCase_001253_1, VkglTestCase_001253_2);

#define VkglTestCase_001254_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001254_2 ".integer.bitfieldextract.ivec2_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001254, VkglTestCase_001254_1, VkglTestCase_001254_2);

#define VkglTestCase_001255_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001255_2 "ns.integer.bitfieldextract.ivec2_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001255, VkglTestCase_001255_1, VkglTestCase_001255_2);

#define VkglTestCase_001256_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001256_2 "ons.integer.bitfieldextract.ivec2_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001256, VkglTestCase_001256_1, VkglTestCase_001256_2);

#define VkglTestCase_001257_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001257_2 "ns.integer.bitfieldextract.ivec2_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001257, VkglTestCase_001257_1, VkglTestCase_001257_2);

#define VkglTestCase_001258_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001258_2 "s.integer.bitfieldextract.ivec2_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001258, VkglTestCase_001258_1, VkglTestCase_001258_2);

#define VkglTestCase_001259_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001259_2 "s.integer.bitfieldextract.ivec2_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001259, VkglTestCase_001259_1, VkglTestCase_001259_2);

#define VkglTestCase_001260_1 "dEQP-GLES31.functional.shaders.builtin_functions."
#define VkglTestCase_001260_2 "integer.bitfieldextract.ivec2_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001260, VkglTestCase_001260_1, VkglTestCase_001260_2);

#define VkglTestCase_001261_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001261_2 ".integer.bitfieldextract.ivec2_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001261, VkglTestCase_001261_1, VkglTestCase_001261_2);

#define VkglTestCase_001262_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001262_2 "s.integer.bitfieldextract.ivec2_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001262, VkglTestCase_001262_1, VkglTestCase_001262_2);

#define VkglTestCase_001263_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001263_2 "ons.integer.bitfieldextract.ivec2_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001263, VkglTestCase_001263_1, VkglTestCase_001263_2);

#define VkglTestCase_001264_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001264_2 "ns.integer.bitfieldextract.ivec2_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001264, VkglTestCase_001264_1, VkglTestCase_001264_2);

#define VkglTestCase_001265_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001265_2 "ns.integer.bitfieldextract.ivec2_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001265, VkglTestCase_001265_1, VkglTestCase_001265_2);

#define VkglTestCase_001266_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001266_2 ".integer.bitfieldextract.ivec2_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001266, VkglTestCase_001266_1, VkglTestCase_001266_2);

#define VkglTestCase_001267_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001267_2 "s.integer.bitfieldextract.ivec2_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001267, VkglTestCase_001267_1, VkglTestCase_001267_2);

#define VkglTestCase_001268_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001268_2 "ns.integer.bitfieldextract.ivec2_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001268, VkglTestCase_001268_1, VkglTestCase_001268_2);

#define VkglTestCase_001269_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001269_2 "ons.integer.bitfieldextract.ivec3_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001269, VkglTestCase_001269_1, VkglTestCase_001269_2);

#define VkglTestCase_001270_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001270_2 "ns.integer.bitfieldextract.ivec3_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001270, VkglTestCase_001270_1, VkglTestCase_001270_2);

#define VkglTestCase_001271_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001271_2 "ns.integer.bitfieldextract.ivec3_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001271, VkglTestCase_001271_1, VkglTestCase_001271_2);

#define VkglTestCase_001272_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001272_2 ".integer.bitfieldextract.ivec3_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001272, VkglTestCase_001272_1, VkglTestCase_001272_2);

#define VkglTestCase_001273_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001273_2 "ns.integer.bitfieldextract.ivec3_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001273, VkglTestCase_001273_1, VkglTestCase_001273_2);

#define VkglTestCase_001274_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001274_2 "ons.integer.bitfieldextract.ivec3_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001274, VkglTestCase_001274_1, VkglTestCase_001274_2);

#define VkglTestCase_001275_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001275_2 "ns.integer.bitfieldextract.ivec3_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001275, VkglTestCase_001275_1, VkglTestCase_001275_2);

#define VkglTestCase_001276_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001276_2 "s.integer.bitfieldextract.ivec3_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001276, VkglTestCase_001276_1, VkglTestCase_001276_2);

#define VkglTestCase_001277_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001277_2 "s.integer.bitfieldextract.ivec3_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001277, VkglTestCase_001277_1, VkglTestCase_001277_2);

#define VkglTestCase_001278_1 "dEQP-GLES31.functional.shaders.builtin_functions."
#define VkglTestCase_001278_2 "integer.bitfieldextract.ivec3_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001278, VkglTestCase_001278_1, VkglTestCase_001278_2);

#define VkglTestCase_001279_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001279_2 ".integer.bitfieldextract.ivec3_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001279, VkglTestCase_001279_1, VkglTestCase_001279_2);

#define VkglTestCase_001280_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001280_2 "s.integer.bitfieldextract.ivec3_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001280, VkglTestCase_001280_1, VkglTestCase_001280_2);

#define VkglTestCase_001281_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001281_2 "ons.integer.bitfieldextract.ivec3_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001281, VkglTestCase_001281_1, VkglTestCase_001281_2);

#define VkglTestCase_001282_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001282_2 "ns.integer.bitfieldextract.ivec3_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001282, VkglTestCase_001282_1, VkglTestCase_001282_2);

#define VkglTestCase_001283_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001283_2 "ns.integer.bitfieldextract.ivec3_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001283, VkglTestCase_001283_1, VkglTestCase_001283_2);

#define VkglTestCase_001284_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001284_2 ".integer.bitfieldextract.ivec3_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001284, VkglTestCase_001284_1, VkglTestCase_001284_2);

#define VkglTestCase_001285_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001285_2 "s.integer.bitfieldextract.ivec3_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001285, VkglTestCase_001285_1, VkglTestCase_001285_2);

#define VkglTestCase_001286_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001286_2 "ns.integer.bitfieldextract.ivec3_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001286, VkglTestCase_001286_1, VkglTestCase_001286_2);

#define VkglTestCase_001287_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001287_2 "ons.integer.bitfieldextract.ivec4_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001287, VkglTestCase_001287_1, VkglTestCase_001287_2);

#define VkglTestCase_001288_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001288_2 "ns.integer.bitfieldextract.ivec4_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001288, VkglTestCase_001288_1, VkglTestCase_001288_2);

#define VkglTestCase_001289_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001289_2 "ns.integer.bitfieldextract.ivec4_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001289, VkglTestCase_001289_1, VkglTestCase_001289_2);

#define VkglTestCase_001290_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001290_2 ".integer.bitfieldextract.ivec4_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001290, VkglTestCase_001290_1, VkglTestCase_001290_2);

#define VkglTestCase_001291_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001291_2 "ns.integer.bitfieldextract.ivec4_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001291, VkglTestCase_001291_1, VkglTestCase_001291_2);

#define VkglTestCase_001292_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001292_2 "ons.integer.bitfieldextract.ivec4_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001292, VkglTestCase_001292_1, VkglTestCase_001292_2);

#define VkglTestCase_001293_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001293_2 "ns.integer.bitfieldextract.ivec4_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001293, VkglTestCase_001293_1, VkglTestCase_001293_2);

#define VkglTestCase_001294_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001294_2 "s.integer.bitfieldextract.ivec4_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001294, VkglTestCase_001294_1, VkglTestCase_001294_2);

#define VkglTestCase_001295_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001295_2 "s.integer.bitfieldextract.ivec4_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001295, VkglTestCase_001295_1, VkglTestCase_001295_2);

#define VkglTestCase_001296_1 "dEQP-GLES31.functional.shaders.builtin_functions."
#define VkglTestCase_001296_2 "integer.bitfieldextract.ivec4_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001296, VkglTestCase_001296_1, VkglTestCase_001296_2);

#define VkglTestCase_001297_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001297_2 ".integer.bitfieldextract.ivec4_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001297, VkglTestCase_001297_1, VkglTestCase_001297_2);

#define VkglTestCase_001298_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001298_2 "s.integer.bitfieldextract.ivec4_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001298, VkglTestCase_001298_1, VkglTestCase_001298_2);

#define VkglTestCase_001299_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001299_2 "ons.integer.bitfieldextract.ivec4_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001299, VkglTestCase_001299_1, VkglTestCase_001299_2);

#define VkglTestCase_001300_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001300_2 "ns.integer.bitfieldextract.ivec4_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001300, VkglTestCase_001300_1, VkglTestCase_001300_2);

#define VkglTestCase_001301_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001301_2 "ns.integer.bitfieldextract.ivec4_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001301, VkglTestCase_001301_1, VkglTestCase_001301_2);

#define VkglTestCase_001302_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001302_2 ".integer.bitfieldextract.ivec4_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001302, VkglTestCase_001302_1, VkglTestCase_001302_2);

#define VkglTestCase_001303_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001303_2 "s.integer.bitfieldextract.ivec4_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001303, VkglTestCase_001303_1, VkglTestCase_001303_2);

#define VkglTestCase_001304_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001304_2 "ns.integer.bitfieldextract.ivec4_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001304, VkglTestCase_001304_1, VkglTestCase_001304_2);

#define VkglTestCase_001305_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001305_2 "ions.integer.bitfieldextract.uint_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001305, VkglTestCase_001305_1, VkglTestCase_001305_2);

#define VkglTestCase_001306_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001306_2 "ons.integer.bitfieldextract.uint_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001306, VkglTestCase_001306_1, VkglTestCase_001306_2);

#define VkglTestCase_001307_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001307_2 "ons.integer.bitfieldextract.uint_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001307, VkglTestCase_001307_1, VkglTestCase_001307_2);

#define VkglTestCase_001308_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001308_2 "s.integer.bitfieldextract.uint_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001308, VkglTestCase_001308_1, VkglTestCase_001308_2);

#define VkglTestCase_001309_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001309_2 "ns.integer.bitfieldextract.uint_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001309, VkglTestCase_001309_1, VkglTestCase_001309_2);

#define VkglTestCase_001310_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001310_2 "ons.integer.bitfieldextract.uint_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001310, VkglTestCase_001310_1, VkglTestCase_001310_2);

#define VkglTestCase_001311_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001311_2 "ns.integer.bitfieldextract.uint_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001311, VkglTestCase_001311_1, VkglTestCase_001311_2);

#define VkglTestCase_001312_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001312_2 "s.integer.bitfieldextract.uint_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001312, VkglTestCase_001312_1, VkglTestCase_001312_2);

#define VkglTestCase_001313_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001313_2 "s.integer.bitfieldextract.uint_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001313, VkglTestCase_001313_1, VkglTestCase_001313_2);

#define VkglTestCase_001314_1 "dEQP-GLES31.functional.shaders.builtin_functions."
#define VkglTestCase_001314_2 "integer.bitfieldextract.uint_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001314, VkglTestCase_001314_1, VkglTestCase_001314_2);

#define VkglTestCase_001315_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001315_2 "s.integer.bitfieldextract.uint_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001315, VkglTestCase_001315_1, VkglTestCase_001315_2);

#define VkglTestCase_001316_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001316_2 "ns.integer.bitfieldextract.uint_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001316, VkglTestCase_001316_1, VkglTestCase_001316_2);

#define VkglTestCase_001317_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001317_2 "ons.integer.bitfieldextract.uint_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001317, VkglTestCase_001317_1, VkglTestCase_001317_2);

#define VkglTestCase_001318_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001318_2 "ns.integer.bitfieldextract.uint_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001318, VkglTestCase_001318_1, VkglTestCase_001318_2);

#define VkglTestCase_001319_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001319_2 "ns.integer.bitfieldextract.uint_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001319, VkglTestCase_001319_1, VkglTestCase_001319_2);

#define VkglTestCase_001320_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001320_2 ".integer.bitfieldextract.uint_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001320, VkglTestCase_001320_1, VkglTestCase_001320_2);

#define VkglTestCase_001321_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001321_2 "ns.integer.bitfieldextract.uint_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001321, VkglTestCase_001321_1, VkglTestCase_001321_2);

#define VkglTestCase_001322_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001322_2 "ons.integer.bitfieldextract.uint_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001322, VkglTestCase_001322_1, VkglTestCase_001322_2);

#define VkglTestCase_001323_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001323_2 "ons.integer.bitfieldextract.uvec2_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001323, VkglTestCase_001323_1, VkglTestCase_001323_2);

#define VkglTestCase_001324_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001324_2 "ns.integer.bitfieldextract.uvec2_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001324, VkglTestCase_001324_1, VkglTestCase_001324_2);

#define VkglTestCase_001325_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001325_2 "ns.integer.bitfieldextract.uvec2_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001325, VkglTestCase_001325_1, VkglTestCase_001325_2);

#define VkglTestCase_001326_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001326_2 ".integer.bitfieldextract.uvec2_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001326, VkglTestCase_001326_1, VkglTestCase_001326_2);

#define VkglTestCase_001327_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001327_2 "ns.integer.bitfieldextract.uvec2_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001327, VkglTestCase_001327_1, VkglTestCase_001327_2);

#define VkglTestCase_001328_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001328_2 "ons.integer.bitfieldextract.uvec2_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001328, VkglTestCase_001328_1, VkglTestCase_001328_2);

#define VkglTestCase_001329_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001329_2 "ns.integer.bitfieldextract.uvec2_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001329, VkglTestCase_001329_1, VkglTestCase_001329_2);

#define VkglTestCase_001330_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001330_2 "s.integer.bitfieldextract.uvec2_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001330, VkglTestCase_001330_1, VkglTestCase_001330_2);

#define VkglTestCase_001331_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001331_2 "s.integer.bitfieldextract.uvec2_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001331, VkglTestCase_001331_1, VkglTestCase_001331_2);

#define VkglTestCase_001332_1 "dEQP-GLES31.functional.shaders.builtin_functions."
#define VkglTestCase_001332_2 "integer.bitfieldextract.uvec2_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001332, VkglTestCase_001332_1, VkglTestCase_001332_2);

#define VkglTestCase_001333_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001333_2 ".integer.bitfieldextract.uvec2_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001333, VkglTestCase_001333_1, VkglTestCase_001333_2);

#define VkglTestCase_001334_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001334_2 "s.integer.bitfieldextract.uvec2_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001334, VkglTestCase_001334_1, VkglTestCase_001334_2);

#define VkglTestCase_001335_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001335_2 "ons.integer.bitfieldextract.uvec2_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001335, VkglTestCase_001335_1, VkglTestCase_001335_2);

#define VkglTestCase_001336_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001336_2 "ns.integer.bitfieldextract.uvec2_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001336, VkglTestCase_001336_1, VkglTestCase_001336_2);

#define VkglTestCase_001337_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001337_2 "ns.integer.bitfieldextract.uvec2_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001337, VkglTestCase_001337_1, VkglTestCase_001337_2);

#define VkglTestCase_001338_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001338_2 ".integer.bitfieldextract.uvec2_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001338, VkglTestCase_001338_1, VkglTestCase_001338_2);

#define VkglTestCase_001339_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001339_2 "s.integer.bitfieldextract.uvec2_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001339, VkglTestCase_001339_1, VkglTestCase_001339_2);

#define VkglTestCase_001340_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001340_2 "ns.integer.bitfieldextract.uvec2_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001340, VkglTestCase_001340_1, VkglTestCase_001340_2);

#define VkglTestCase_001341_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001341_2 "ons.integer.bitfieldextract.uvec3_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001341, VkglTestCase_001341_1, VkglTestCase_001341_2);

#define VkglTestCase_001342_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001342_2 "ns.integer.bitfieldextract.uvec3_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001342, VkglTestCase_001342_1, VkglTestCase_001342_2);

#define VkglTestCase_001343_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001343_2 "ns.integer.bitfieldextract.uvec3_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001343, VkglTestCase_001343_1, VkglTestCase_001343_2);

#define VkglTestCase_001344_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001344_2 ".integer.bitfieldextract.uvec3_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001344, VkglTestCase_001344_1, VkglTestCase_001344_2);

#define VkglTestCase_001345_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001345_2 "ns.integer.bitfieldextract.uvec3_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001345, VkglTestCase_001345_1, VkglTestCase_001345_2);

#define VkglTestCase_001346_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001346_2 "ons.integer.bitfieldextract.uvec3_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001346, VkglTestCase_001346_1, VkglTestCase_001346_2);

#define VkglTestCase_001347_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001347_2 "ns.integer.bitfieldextract.uvec3_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001347, VkglTestCase_001347_1, VkglTestCase_001347_2);

#define VkglTestCase_001348_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001348_2 "s.integer.bitfieldextract.uvec3_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001348, VkglTestCase_001348_1, VkglTestCase_001348_2);

#define VkglTestCase_001349_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001349_2 "s.integer.bitfieldextract.uvec3_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001349, VkglTestCase_001349_1, VkglTestCase_001349_2);

#define VkglTestCase_001350_1 "dEQP-GLES31.functional.shaders.builtin_functions."
#define VkglTestCase_001350_2 "integer.bitfieldextract.uvec3_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001350, VkglTestCase_001350_1, VkglTestCase_001350_2);

#define VkglTestCase_001351_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001351_2 ".integer.bitfieldextract.uvec3_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001351, VkglTestCase_001351_1, VkglTestCase_001351_2);

#define VkglTestCase_001352_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001352_2 "s.integer.bitfieldextract.uvec3_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001352, VkglTestCase_001352_1, VkglTestCase_001352_2);

#define VkglTestCase_001353_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001353_2 "ons.integer.bitfieldextract.uvec3_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001353, VkglTestCase_001353_1, VkglTestCase_001353_2);

#define VkglTestCase_001354_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001354_2 "ns.integer.bitfieldextract.uvec3_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001354, VkglTestCase_001354_1, VkglTestCase_001354_2);

#define VkglTestCase_001355_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001355_2 "ns.integer.bitfieldextract.uvec3_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001355, VkglTestCase_001355_1, VkglTestCase_001355_2);

#define VkglTestCase_001356_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001356_2 ".integer.bitfieldextract.uvec3_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001356, VkglTestCase_001356_1, VkglTestCase_001356_2);

#define VkglTestCase_001357_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001357_2 "s.integer.bitfieldextract.uvec3_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001357, VkglTestCase_001357_1, VkglTestCase_001357_2);

#define VkglTestCase_001358_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001358_2 "ns.integer.bitfieldextract.uvec3_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001358, VkglTestCase_001358_1, VkglTestCase_001358_2);

#define VkglTestCase_001359_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001359_2 "ons.integer.bitfieldextract.uvec4_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001359, VkglTestCase_001359_1, VkglTestCase_001359_2);

#define VkglTestCase_001360_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001360_2 "ns.integer.bitfieldextract.uvec4_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001360, VkglTestCase_001360_1, VkglTestCase_001360_2);

#define VkglTestCase_001361_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001361_2 "ns.integer.bitfieldextract.uvec4_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001361, VkglTestCase_001361_1, VkglTestCase_001361_2);

#define VkglTestCase_001362_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001362_2 ".integer.bitfieldextract.uvec4_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001362, VkglTestCase_001362_1, VkglTestCase_001362_2);

#define VkglTestCase_001363_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001363_2 "ns.integer.bitfieldextract.uvec4_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001363, VkglTestCase_001363_1, VkglTestCase_001363_2);

#define VkglTestCase_001364_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001364_2 "ons.integer.bitfieldextract.uvec4_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001364, VkglTestCase_001364_1, VkglTestCase_001364_2);

#define VkglTestCase_001365_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001365_2 "ns.integer.bitfieldextract.uvec4_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001365, VkglTestCase_001365_1, VkglTestCase_001365_2);

#define VkglTestCase_001366_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001366_2 "s.integer.bitfieldextract.uvec4_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001366, VkglTestCase_001366_1, VkglTestCase_001366_2);

#define VkglTestCase_001367_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001367_2 "s.integer.bitfieldextract.uvec4_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001367, VkglTestCase_001367_1, VkglTestCase_001367_2);

#define VkglTestCase_001368_1 "dEQP-GLES31.functional.shaders.builtin_functions."
#define VkglTestCase_001368_2 "integer.bitfieldextract.uvec4_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001368, VkglTestCase_001368_1, VkglTestCase_001368_2);

#define VkglTestCase_001369_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001369_2 ".integer.bitfieldextract.uvec4_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001369, VkglTestCase_001369_1, VkglTestCase_001369_2);

#define VkglTestCase_001370_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001370_2 "s.integer.bitfieldextract.uvec4_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001370, VkglTestCase_001370_1, VkglTestCase_001370_2);

#define VkglTestCase_001371_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001371_2 "ons.integer.bitfieldextract.uvec4_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001371, VkglTestCase_001371_1, VkglTestCase_001371_2);

#define VkglTestCase_001372_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001372_2 "ns.integer.bitfieldextract.uvec4_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001372, VkglTestCase_001372_1, VkglTestCase_001372_2);

#define VkglTestCase_001373_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001373_2 "ns.integer.bitfieldextract.uvec4_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001373, VkglTestCase_001373_1, VkglTestCase_001373_2);

#define VkglTestCase_001374_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001374_2 ".integer.bitfieldextract.uvec4_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001374, VkglTestCase_001374_1, VkglTestCase_001374_2);

#define VkglTestCase_001375_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001375_2 "s.integer.bitfieldextract.uvec4_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001375, VkglTestCase_001375_1, VkglTestCase_001375_2);

#define VkglTestCase_001376_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001376_2 "ns.integer.bitfieldextract.uvec4_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001376, VkglTestCase_001376_1, VkglTestCase_001376_2);
