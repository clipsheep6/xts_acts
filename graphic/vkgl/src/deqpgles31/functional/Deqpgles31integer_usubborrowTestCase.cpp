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

#define VkglTestCase_001113_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001113_2 "ctions.integer.usubborrow.uint_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001113, VkglTestCase_001113_1, VkglTestCase_001113_2);

#define VkglTestCase_001114_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001114_2 "tions.integer.usubborrow.uint_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001114, VkglTestCase_001114_1, VkglTestCase_001114_2);

#define VkglTestCase_001115_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001115_2 "tions.integer.usubborrow.uint_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001115, VkglTestCase_001115_1, VkglTestCase_001115_2);

#define VkglTestCase_001116_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001116_2 "ons.integer.usubborrow.uint_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001116, VkglTestCase_001116_1, VkglTestCase_001116_2);

#define VkglTestCase_001117_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001117_2 "tions.integer.usubborrow.uint_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001117, VkglTestCase_001117_1, VkglTestCase_001117_2);

#define VkglTestCase_001118_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001118_2 "ctions.integer.usubborrow.uint_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001118, VkglTestCase_001118_1, VkglTestCase_001118_2);

#define VkglTestCase_001119_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001119_2 "tions.integer.usubborrow.uint_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001119, VkglTestCase_001119_1, VkglTestCase_001119_2);

#define VkglTestCase_001120_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001120_2 "ions.integer.usubborrow.uint_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001120, VkglTestCase_001120_1, VkglTestCase_001120_2);

#define VkglTestCase_001121_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001121_2 "ions.integer.usubborrow.uint_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001121, VkglTestCase_001121_1, VkglTestCase_001121_2);

#define VkglTestCase_001122_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001122_2 "ns.integer.usubborrow.uint_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001122, VkglTestCase_001122_1, VkglTestCase_001122_2);

#define VkglTestCase_001123_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001123_2 "ons.integer.usubborrow.uint_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001123, VkglTestCase_001123_1, VkglTestCase_001123_2);

#define VkglTestCase_001124_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001124_2 "ions.integer.usubborrow.uint_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001124, VkglTestCase_001124_1, VkglTestCase_001124_2);

#define VkglTestCase_001125_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001125_2 "ctions.integer.usubborrow.uint_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001125, VkglTestCase_001125_1, VkglTestCase_001125_2);

#define VkglTestCase_001126_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001126_2 "tions.integer.usubborrow.uint_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001126, VkglTestCase_001126_1, VkglTestCase_001126_2);

#define VkglTestCase_001127_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001127_2 "tions.integer.usubborrow.uint_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001127, VkglTestCase_001127_1, VkglTestCase_001127_2);

#define VkglTestCase_001128_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001128_2 "ons.integer.usubborrow.uint_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001128, VkglTestCase_001128_1, VkglTestCase_001128_2);

#define VkglTestCase_001129_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001129_2 "ions.integer.usubborrow.uint_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001129, VkglTestCase_001129_1, VkglTestCase_001129_2);

#define VkglTestCase_001130_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001130_2 "tions.integer.usubborrow.uint_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001130, VkglTestCase_001130_1, VkglTestCase_001130_2);

#define VkglTestCase_001131_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001131_2 "ctions.integer.usubborrow.uvec2_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001131, VkglTestCase_001131_1, VkglTestCase_001131_2);

#define VkglTestCase_001132_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001132_2 "tions.integer.usubborrow.uvec2_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001132, VkglTestCase_001132_1, VkglTestCase_001132_2);

#define VkglTestCase_001133_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001133_2 "tions.integer.usubborrow.uvec2_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001133, VkglTestCase_001133_1, VkglTestCase_001133_2);

#define VkglTestCase_001134_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001134_2 "ons.integer.usubborrow.uvec2_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001134, VkglTestCase_001134_1, VkglTestCase_001134_2);

#define VkglTestCase_001135_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001135_2 "ions.integer.usubborrow.uvec2_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001135, VkglTestCase_001135_1, VkglTestCase_001135_2);

#define VkglTestCase_001136_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001136_2 "tions.integer.usubborrow.uvec2_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001136, VkglTestCase_001136_1, VkglTestCase_001136_2);

#define VkglTestCase_001137_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001137_2 "ions.integer.usubborrow.uvec2_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001137, VkglTestCase_001137_1, VkglTestCase_001137_2);

#define VkglTestCase_001138_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001138_2 "ons.integer.usubborrow.uvec2_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001138, VkglTestCase_001138_1, VkglTestCase_001138_2);

#define VkglTestCase_001139_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001139_2 "ons.integer.usubborrow.uvec2_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001139, VkglTestCase_001139_1, VkglTestCase_001139_2);

#define VkglTestCase_001140_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001140_2 "s.integer.usubborrow.uvec2_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001140, VkglTestCase_001140_1, VkglTestCase_001140_2);

#define VkglTestCase_001141_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001141_2 "ons.integer.usubborrow.uvec2_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001141, VkglTestCase_001141_1, VkglTestCase_001141_2);

#define VkglTestCase_001142_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001142_2 "ions.integer.usubborrow.uvec2_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001142, VkglTestCase_001142_1, VkglTestCase_001142_2);

#define VkglTestCase_001143_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001143_2 "tions.integer.usubborrow.uvec2_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001143, VkglTestCase_001143_1, VkglTestCase_001143_2);

#define VkglTestCase_001144_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001144_2 "ions.integer.usubborrow.uvec2_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001144, VkglTestCase_001144_1, VkglTestCase_001144_2);

#define VkglTestCase_001145_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001145_2 "ions.integer.usubborrow.uvec2_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001145, VkglTestCase_001145_1, VkglTestCase_001145_2);

#define VkglTestCase_001146_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001146_2 "ns.integer.usubborrow.uvec2_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001146, VkglTestCase_001146_1, VkglTestCase_001146_2);

#define VkglTestCase_001147_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001147_2 "ions.integer.usubborrow.uvec2_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001147, VkglTestCase_001147_1, VkglTestCase_001147_2);

#define VkglTestCase_001148_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001148_2 "tions.integer.usubborrow.uvec2_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001148, VkglTestCase_001148_1, VkglTestCase_001148_2);

#define VkglTestCase_001149_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001149_2 "ctions.integer.usubborrow.uvec3_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001149, VkglTestCase_001149_1, VkglTestCase_001149_2);

#define VkglTestCase_001150_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001150_2 "tions.integer.usubborrow.uvec3_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001150, VkglTestCase_001150_1, VkglTestCase_001150_2);

#define VkglTestCase_001151_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001151_2 "tions.integer.usubborrow.uvec3_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001151, VkglTestCase_001151_1, VkglTestCase_001151_2);

#define VkglTestCase_001152_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001152_2 "ons.integer.usubborrow.uvec3_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001152, VkglTestCase_001152_1, VkglTestCase_001152_2);

#define VkglTestCase_001153_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001153_2 "ions.integer.usubborrow.uvec3_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001153, VkglTestCase_001153_1, VkglTestCase_001153_2);

#define VkglTestCase_001154_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001154_2 "tions.integer.usubborrow.uvec3_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001154, VkglTestCase_001154_1, VkglTestCase_001154_2);

#define VkglTestCase_001155_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001155_2 "ions.integer.usubborrow.uvec3_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001155, VkglTestCase_001155_1, VkglTestCase_001155_2);

#define VkglTestCase_001156_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001156_2 "ons.integer.usubborrow.uvec3_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001156, VkglTestCase_001156_1, VkglTestCase_001156_2);

#define VkglTestCase_001157_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001157_2 "ons.integer.usubborrow.uvec3_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001157, VkglTestCase_001157_1, VkglTestCase_001157_2);

#define VkglTestCase_001158_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001158_2 "s.integer.usubborrow.uvec3_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001158, VkglTestCase_001158_1, VkglTestCase_001158_2);

#define VkglTestCase_001159_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001159_2 "ons.integer.usubborrow.uvec3_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001159, VkglTestCase_001159_1, VkglTestCase_001159_2);

#define VkglTestCase_001160_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001160_2 "ions.integer.usubborrow.uvec3_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001160, VkglTestCase_001160_1, VkglTestCase_001160_2);

#define VkglTestCase_001161_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001161_2 "tions.integer.usubborrow.uvec3_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001161, VkglTestCase_001161_1, VkglTestCase_001161_2);

#define VkglTestCase_001162_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001162_2 "ions.integer.usubborrow.uvec3_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001162, VkglTestCase_001162_1, VkglTestCase_001162_2);

#define VkglTestCase_001163_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001163_2 "ions.integer.usubborrow.uvec3_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001163, VkglTestCase_001163_1, VkglTestCase_001163_2);

#define VkglTestCase_001164_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001164_2 "ns.integer.usubborrow.uvec3_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001164, VkglTestCase_001164_1, VkglTestCase_001164_2);

#define VkglTestCase_001165_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001165_2 "ions.integer.usubborrow.uvec3_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001165, VkglTestCase_001165_1, VkglTestCase_001165_2);

#define VkglTestCase_001166_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001166_2 "tions.integer.usubborrow.uvec3_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001166, VkglTestCase_001166_1, VkglTestCase_001166_2);

#define VkglTestCase_001167_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001167_2 "ctions.integer.usubborrow.uvec4_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001167, VkglTestCase_001167_1, VkglTestCase_001167_2);

#define VkglTestCase_001168_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001168_2 "tions.integer.usubborrow.uvec4_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001168, VkglTestCase_001168_1, VkglTestCase_001168_2);

#define VkglTestCase_001169_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001169_2 "tions.integer.usubborrow.uvec4_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001169, VkglTestCase_001169_1, VkglTestCase_001169_2);

#define VkglTestCase_001170_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001170_2 "ons.integer.usubborrow.uvec4_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001170, VkglTestCase_001170_1, VkglTestCase_001170_2);

#define VkglTestCase_001171_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001171_2 "ions.integer.usubborrow.uvec4_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001171, VkglTestCase_001171_1, VkglTestCase_001171_2);

#define VkglTestCase_001172_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001172_2 "tions.integer.usubborrow.uvec4_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001172, VkglTestCase_001172_1, VkglTestCase_001172_2);

#define VkglTestCase_001173_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001173_2 "ions.integer.usubborrow.uvec4_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001173, VkglTestCase_001173_1, VkglTestCase_001173_2);

#define VkglTestCase_001174_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001174_2 "ons.integer.usubborrow.uvec4_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001174, VkglTestCase_001174_1, VkglTestCase_001174_2);

#define VkglTestCase_001175_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001175_2 "ons.integer.usubborrow.uvec4_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001175, VkglTestCase_001175_1, VkglTestCase_001175_2);

#define VkglTestCase_001176_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001176_2 "s.integer.usubborrow.uvec4_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001176, VkglTestCase_001176_1, VkglTestCase_001176_2);

#define VkglTestCase_001177_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001177_2 "ons.integer.usubborrow.uvec4_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001177, VkglTestCase_001177_1, VkglTestCase_001177_2);

#define VkglTestCase_001178_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001178_2 "ions.integer.usubborrow.uvec4_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001178, VkglTestCase_001178_1, VkglTestCase_001178_2);

#define VkglTestCase_001179_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001179_2 "tions.integer.usubborrow.uvec4_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001179, VkglTestCase_001179_1, VkglTestCase_001179_2);

#define VkglTestCase_001180_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001180_2 "ions.integer.usubborrow.uvec4_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001180, VkglTestCase_001180_1, VkglTestCase_001180_2);

#define VkglTestCase_001181_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001181_2 "ions.integer.usubborrow.uvec4_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001181, VkglTestCase_001181_1, VkglTestCase_001181_2);

#define VkglTestCase_001182_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001182_2 "ns.integer.usubborrow.uvec4_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001182, VkglTestCase_001182_1, VkglTestCase_001182_2);

#define VkglTestCase_001183_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001183_2 "ions.integer.usubborrow.uvec4_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001183, VkglTestCase_001183_1, VkglTestCase_001183_2);

#define VkglTestCase_001184_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001184_2 "tions.integer.usubborrow.uvec4_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001184, VkglTestCase_001184_1, VkglTestCase_001184_2);
