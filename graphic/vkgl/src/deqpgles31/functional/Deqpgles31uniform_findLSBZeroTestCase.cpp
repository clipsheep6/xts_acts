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

#define VkglTestCase_002133_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_002133_2 "unctions.uniform.findLSBZero.lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002133, VkglTestCase_002133_1, VkglTestCase_002133_2);

#define VkglTestCase_002134_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002134_2 "nctions.uniform.findLSBZero.lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002134, VkglTestCase_002134_1, VkglTestCase_002134_2);

#define VkglTestCase_002135_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002135_2 "nctions.uniform.findLSBZero.lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002135, VkglTestCase_002135_1, VkglTestCase_002135_2);

#define VkglTestCase_002136_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002136_2 "tions.uniform.findLSBZero.lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002136, VkglTestCase_002136_1, VkglTestCase_002136_2);

#define VkglTestCase_002137_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002137_2 "nctions.uniform.findLSBZero.lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002137, VkglTestCase_002137_1, VkglTestCase_002137_2);

#define VkglTestCase_002138_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_002138_2 "unctions.uniform.findLSBZero.lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002138, VkglTestCase_002138_1, VkglTestCase_002138_2);

#define VkglTestCase_002139_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002139_2 "nctions.uniform.findLSBZero.mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002139, VkglTestCase_002139_1, VkglTestCase_002139_2);

#define VkglTestCase_002140_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002140_2 "ctions.uniform.findLSBZero.mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002140, VkglTestCase_002140_1, VkglTestCase_002140_2);

#define VkglTestCase_002141_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002141_2 "ctions.uniform.findLSBZero.mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002141, VkglTestCase_002141_1, VkglTestCase_002141_2);

#define VkglTestCase_002142_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002142_2 "ions.uniform.findLSBZero.mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002142, VkglTestCase_002142_1, VkglTestCase_002142_2);

#define VkglTestCase_002143_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002143_2 "tions.uniform.findLSBZero.mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002143, VkglTestCase_002143_1, VkglTestCase_002143_2);

#define VkglTestCase_002144_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002144_2 "ctions.uniform.findLSBZero.mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002144, VkglTestCase_002144_1, VkglTestCase_002144_2);

#define VkglTestCase_002145_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_002145_2 "unctions.uniform.findLSBZero.highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002145, VkglTestCase_002145_1, VkglTestCase_002145_2);

#define VkglTestCase_002146_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002146_2 "nctions.uniform.findLSBZero.highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002146, VkglTestCase_002146_1, VkglTestCase_002146_2);

#define VkglTestCase_002147_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002147_2 "nctions.uniform.findLSBZero.highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002147, VkglTestCase_002147_1, VkglTestCase_002147_2);

#define VkglTestCase_002148_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002148_2 "tions.uniform.findLSBZero.highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002148, VkglTestCase_002148_1, VkglTestCase_002148_2);

#define VkglTestCase_002149_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002149_2 "ctions.uniform.findLSBZero.highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002149, VkglTestCase_002149_1, VkglTestCase_002149_2);

#define VkglTestCase_002150_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002150_2 "nctions.uniform.findLSBZero.highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002150, VkglTestCase_002150_1, VkglTestCase_002150_2);
