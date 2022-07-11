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
#include "../ActsDeqpgles310003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002151_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002151_2 "ctions.uniform.findLSBMinusOne.lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002151, VkglTestCase_002151_1, VkglTestCase_002151_2);

#define VkglTestCase_002152_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002152_2 "tions.uniform.findLSBMinusOne.lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002152, VkglTestCase_002152_1, VkglTestCase_002152_2);

#define VkglTestCase_002153_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002153_2 "tions.uniform.findLSBMinusOne.lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002153, VkglTestCase_002153_1, VkglTestCase_002153_2);

#define VkglTestCase_002154_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_002154_2 "ons.uniform.findLSBMinusOne.lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002154, VkglTestCase_002154_1, VkglTestCase_002154_2);

#define VkglTestCase_002155_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002155_2 "tions.uniform.findLSBMinusOne.lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002155, VkglTestCase_002155_1, VkglTestCase_002155_2);

#define VkglTestCase_002156_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002156_2 "ctions.uniform.findLSBMinusOne.lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002156, VkglTestCase_002156_1, VkglTestCase_002156_2);

#define VkglTestCase_002157_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002157_2 "tions.uniform.findLSBMinusOne.mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002157, VkglTestCase_002157_1, VkglTestCase_002157_2);

#define VkglTestCase_002158_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002158_2 "ions.uniform.findLSBMinusOne.mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002158, VkglTestCase_002158_1, VkglTestCase_002158_2);

#define VkglTestCase_002159_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002159_2 "ions.uniform.findLSBMinusOne.mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002159, VkglTestCase_002159_1, VkglTestCase_002159_2);

#define VkglTestCase_002160_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_002160_2 "ns.uniform.findLSBMinusOne.mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002160, VkglTestCase_002160_1, VkglTestCase_002160_2);

#define VkglTestCase_002161_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_002161_2 "ons.uniform.findLSBMinusOne.mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002161, VkglTestCase_002161_1, VkglTestCase_002161_2);

#define VkglTestCase_002162_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002162_2 "ions.uniform.findLSBMinusOne.mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002162, VkglTestCase_002162_1, VkglTestCase_002162_2);

#define VkglTestCase_002163_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002163_2 "ctions.uniform.findLSBMinusOne.highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002163, VkglTestCase_002163_1, VkglTestCase_002163_2);

#define VkglTestCase_002164_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002164_2 "tions.uniform.findLSBMinusOne.highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002164, VkglTestCase_002164_1, VkglTestCase_002164_2);

#define VkglTestCase_002165_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002165_2 "tions.uniform.findLSBMinusOne.highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002165, VkglTestCase_002165_1, VkglTestCase_002165_2);

#define VkglTestCase_002166_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_002166_2 "ons.uniform.findLSBMinusOne.highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002166, VkglTestCase_002166_1, VkglTestCase_002166_2);

#define VkglTestCase_002167_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002167_2 "ions.uniform.findLSBMinusOne.highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002167, VkglTestCase_002167_1, VkglTestCase_002167_2);

#define VkglTestCase_002168_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002168_2 "tions.uniform.findLSBMinusOne.highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002168, VkglTestCase_002168_1, VkglTestCase_002168_2);
