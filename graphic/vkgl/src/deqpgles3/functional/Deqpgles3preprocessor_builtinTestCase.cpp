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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001124_1 "dEQP-GLES3.functional.shaders.p"
#define VkglTestCase_001124_2 "reprocessor.builtin.line_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001124, VkglTestCase_001124_1, VkglTestCase_001124_2);

#define VkglTestCase_001125_1 "dEQP-GLES3.functional.shaders.pr"
#define VkglTestCase_001125_2 "eprocessor.builtin.line_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001125, VkglTestCase_001125_1, VkglTestCase_001125_2);

#define VkglTestCase_001126_1 "dEQP-GLES3.functional.shaders.prepr"
#define VkglTestCase_001126_2 "ocessor.builtin.line_and_file_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001126, VkglTestCase_001126_1, VkglTestCase_001126_2);

#define VkglTestCase_001127_1 "dEQP-GLES3.functional.shaders.prepro"
#define VkglTestCase_001127_2 "cessor.builtin.line_and_file_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001127, VkglTestCase_001127_1, VkglTestCase_001127_2);

#define VkglTestCase_001128_1 "dEQP-GLES3.functional.shaders.prepro"
#define VkglTestCase_001128_2 "cessor.builtin.line_defined_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001128, VkglTestCase_001128_1, VkglTestCase_001128_2);

#define VkglTestCase_001129_1 "dEQP-GLES3.functional.shaders.preproc"
#define VkglTestCase_001129_2 "essor.builtin.line_defined_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001129, VkglTestCase_001129_1, VkglTestCase_001129_2);

#define VkglTestCase_001130_1 "dEQP-GLES3.functional.shaders.prepro"
#define VkglTestCase_001130_2 "cessor.builtin.line_defined_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001130, VkglTestCase_001130_1, VkglTestCase_001130_2);

#define VkglTestCase_001131_1 "dEQP-GLES3.functional.shaders.preproc"
#define VkglTestCase_001131_2 "essor.builtin.line_defined_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001131, VkglTestCase_001131_1, VkglTestCase_001131_2);

#define VkglTestCase_001132_1 "dEQP-GLES3.functional.shaders.prep"
#define VkglTestCase_001132_2 "rocessor.builtin.empty_line_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001132, VkglTestCase_001132_1, VkglTestCase_001132_2);

#define VkglTestCase_001133_1 "dEQP-GLES3.functional.shaders.prepr"
#define VkglTestCase_001133_2 "ocessor.builtin.empty_line_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001133, VkglTestCase_001133_1, VkglTestCase_001133_2);

#define VkglTestCase_001134_1 "dEQP-GLES3.functional.shaders.preproce"
#define VkglTestCase_001134_2 "ssor.builtin.invalid_line_file_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001134, VkglTestCase_001134_1, VkglTestCase_001134_2);

#define VkglTestCase_001135_1 "dEQP-GLES3.functional.shaders.preproces"
#define VkglTestCase_001135_2 "sor.builtin.invalid_line_file_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001135, VkglTestCase_001135_1, VkglTestCase_001135_2);

#define VkglTestCase_001136_1 "dEQP-GLES3.functional.shaders.preproce"
#define VkglTestCase_001136_2 "ssor.builtin.invalid_line_file_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001136, VkglTestCase_001136_1, VkglTestCase_001136_2);

#define VkglTestCase_001137_1 "dEQP-GLES3.functional.shaders.preproces"
#define VkglTestCase_001137_2 "sor.builtin.invalid_line_file_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001137, VkglTestCase_001137_1, VkglTestCase_001137_2);

#define VkglTestCase_001138_1 "dEQP-GLES3.functional.shaders.preproce"
#define VkglTestCase_001138_2 "ssor.builtin.invalid_line_file_4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001138, VkglTestCase_001138_1, VkglTestCase_001138_2);

#define VkglTestCase_001139_1 "dEQP-GLES3.functional.shaders.preproces"
#define VkglTestCase_001139_2 "sor.builtin.invalid_line_file_4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001139, VkglTestCase_001139_1, VkglTestCase_001139_2);
