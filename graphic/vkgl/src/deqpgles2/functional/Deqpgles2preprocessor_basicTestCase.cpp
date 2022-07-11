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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000133_1 "dEQP-GLES2.functional.shaders.prepr"
#define VkglTestCase_000133_2 "ocessor.basic.correct_phases_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000133, VkglTestCase_000133_1, VkglTestCase_000133_2);

#define VkglTestCase_000134_1 "dEQP-GLES2.functional.shaders.prepro"
#define VkglTestCase_000134_2 "cessor.basic.correct_phases_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000134, VkglTestCase_000134_1, VkglTestCase_000134_2);

#define VkglTestCase_000135_1 "dEQP-GLES2.functional.shaders.preproc"
#define VkglTestCase_000135_2 "essor.basic.invalid_identifier_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000135, VkglTestCase_000135_1, VkglTestCase_000135_2);

#define VkglTestCase_000136_1 "dEQP-GLES2.functional.shaders.preproce"
#define VkglTestCase_000136_2 "ssor.basic.invalid_identifier_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000136, VkglTestCase_000136_1, VkglTestCase_000136_2);

#define VkglTestCase_000137_1 "dEQP-GLES2.functional.shaders.prepr"
#define VkglTestCase_000137_2 "ocessor.basic.null_directive_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000137, VkglTestCase_000137_1, VkglTestCase_000137_2);

#define VkglTestCase_000138_1 "dEQP-GLES2.functional.shaders.prepro"
#define VkglTestCase_000138_2 "cessor.basic.null_directive_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000138, VkglTestCase_000138_1, VkglTestCase_000138_2);

#define VkglTestCase_000139_1 "dEQP-GLES2.functional.shaders.prepro"
#define VkglTestCase_000139_2 "cessor.basic.invalid_directive_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000139, VkglTestCase_000139_1, VkglTestCase_000139_2);

#define VkglTestCase_000140_1 "dEQP-GLES2.functional.shaders.preproc"
#define VkglTestCase_000140_2 "essor.basic.invalid_directive_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000140, VkglTestCase_000140_1, VkglTestCase_000140_2);

#define VkglTestCase_000141_1 "dEQP-GLES2.functional.shaders.preproc"
#define VkglTestCase_000141_2 "essor.basic.missing_identifier_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000141, VkglTestCase_000141_1, VkglTestCase_000141_2);

#define VkglTestCase_000142_1 "dEQP-GLES2.functional.shaders.preproce"
#define VkglTestCase_000142_2 "ssor.basic.missing_identifier_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000142, VkglTestCase_000142_1, VkglTestCase_000142_2);

#define VkglTestCase_000143_1 "dEQP-GLES2.functional.shaders.prep"
#define VkglTestCase_000143_2 "rocessor.basic.empty_object_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000143, VkglTestCase_000143_1, VkglTestCase_000143_2);

#define VkglTestCase_000144_1 "dEQP-GLES2.functional.shaders.prepr"
#define VkglTestCase_000144_2 "ocessor.basic.empty_object_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000144, VkglTestCase_000144_1, VkglTestCase_000144_2);

#define VkglTestCase_000145_1 "dEQP-GLES2.functional.shaders.prepr"
#define VkglTestCase_000145_2 "ocessor.basic.empty_function_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000145, VkglTestCase_000145_1, VkglTestCase_000145_2);

#define VkglTestCase_000146_1 "dEQP-GLES2.functional.shaders.prepro"
#define VkglTestCase_000146_2 "cessor.basic.empty_function_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000146, VkglTestCase_000146_1, VkglTestCase_000146_2);

#define VkglTestCase_000147_1 "dEQP-GLES2.functional.shaders.prepr"
#define VkglTestCase_000147_2 "ocessor.basic.empty_directive_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000147, VkglTestCase_000147_1, VkglTestCase_000147_2);

#define VkglTestCase_000148_1 "dEQP-GLES2.functional.shaders.prepro"
#define VkglTestCase_000148_2 "cessor.basic.empty_directive_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000148, VkglTestCase_000148_1, VkglTestCase_000148_2);
