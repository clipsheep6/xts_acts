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

#define VkglTestCase_002115_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002115_2 "ctions.uniform.findMSBMinusOne.lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002115, VkglTestCase_002115_1, VkglTestCase_002115_2);

#define VkglTestCase_002116_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002116_2 "tions.uniform.findMSBMinusOne.lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002116, VkglTestCase_002116_1, VkglTestCase_002116_2);

#define VkglTestCase_002117_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002117_2 "tions.uniform.findMSBMinusOne.lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002117, VkglTestCase_002117_1, VkglTestCase_002117_2);

#define VkglTestCase_002118_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_002118_2 "ons.uniform.findMSBMinusOne.lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002118, VkglTestCase_002118_1, VkglTestCase_002118_2);

#define VkglTestCase_002119_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002119_2 "tions.uniform.findMSBMinusOne.lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002119, VkglTestCase_002119_1, VkglTestCase_002119_2);

#define VkglTestCase_002120_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002120_2 "ctions.uniform.findMSBMinusOne.lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002120, VkglTestCase_002120_1, VkglTestCase_002120_2);

#define VkglTestCase_002121_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002121_2 "tions.uniform.findMSBMinusOne.mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002121, VkglTestCase_002121_1, VkglTestCase_002121_2);

#define VkglTestCase_002122_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002122_2 "ions.uniform.findMSBMinusOne.mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002122, VkglTestCase_002122_1, VkglTestCase_002122_2);

#define VkglTestCase_002123_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002123_2 "ions.uniform.findMSBMinusOne.mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002123, VkglTestCase_002123_1, VkglTestCase_002123_2);

#define VkglTestCase_002124_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_002124_2 "ns.uniform.findMSBMinusOne.mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002124, VkglTestCase_002124_1, VkglTestCase_002124_2);

#define VkglTestCase_002125_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_002125_2 "ons.uniform.findMSBMinusOne.mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002125, VkglTestCase_002125_1, VkglTestCase_002125_2);

#define VkglTestCase_002126_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002126_2 "ions.uniform.findMSBMinusOne.mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002126, VkglTestCase_002126_1, VkglTestCase_002126_2);

#define VkglTestCase_002127_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002127_2 "ctions.uniform.findMSBMinusOne.highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002127, VkglTestCase_002127_1, VkglTestCase_002127_2);

#define VkglTestCase_002128_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002128_2 "tions.uniform.findMSBMinusOne.highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002128, VkglTestCase_002128_1, VkglTestCase_002128_2);

#define VkglTestCase_002129_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002129_2 "tions.uniform.findMSBMinusOne.highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002129, VkglTestCase_002129_1, VkglTestCase_002129_2);

#define VkglTestCase_002130_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_002130_2 "ons.uniform.findMSBMinusOne.highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002130, VkglTestCase_002130_1, VkglTestCase_002130_2);

#define VkglTestCase_002131_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002131_2 "ions.uniform.findMSBMinusOne.highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002131, VkglTestCase_002131_1, VkglTestCase_002131_2);

#define VkglTestCase_002132_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002132_2 "tions.uniform.findMSBMinusOne.highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002132, VkglTestCase_002132_1, VkglTestCase_002132_2);
