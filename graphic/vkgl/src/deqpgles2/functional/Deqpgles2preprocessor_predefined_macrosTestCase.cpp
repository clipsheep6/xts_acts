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

#define VkglTestCase_000273_1 "dEQP-GLES2.functional.shaders.preproc"
#define VkglTestCase_000273_2 "essor.predefined_macros.version_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000273, VkglTestCase_000273_1, VkglTestCase_000273_2);

#define VkglTestCase_000274_1 "dEQP-GLES2.functional.shaders.preproce"
#define VkglTestCase_000274_2 "ssor.predefined_macros.version_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000274, VkglTestCase_000274_1, VkglTestCase_000274_2);

#define VkglTestCase_000275_1 "dEQP-GLES2.functional.shaders.preproc"
#define VkglTestCase_000275_2 "essor.predefined_macros.gl_es_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000275, VkglTestCase_000275_1, VkglTestCase_000275_2);

#define VkglTestCase_000276_1 "dEQP-GLES2.functional.shaders.preproce"
#define VkglTestCase_000276_2 "ssor.predefined_macros.gl_es_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000276, VkglTestCase_000276_1, VkglTestCase_000276_2);

#define VkglTestCase_000277_1 "dEQP-GLES2.functional.shaders.preproc"
#define VkglTestCase_000277_2 "essor.predefined_macros.gl_es_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000277, VkglTestCase_000277_1, VkglTestCase_000277_2);

#define VkglTestCase_000278_1 "dEQP-GLES2.functional.shaders.preproce"
#define VkglTestCase_000278_2 "ssor.predefined_macros.gl_es_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000278, VkglTestCase_000278_1, VkglTestCase_000278_2);

#define VkglTestCase_000279_1 "dEQP-GLES2.functional.shaders.preproc"
#define VkglTestCase_000279_2 "essor.predefined_macros.line_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000279, VkglTestCase_000279_1, VkglTestCase_000279_2);

#define VkglTestCase_000280_1 "dEQP-GLES2.functional.shaders.preproce"
#define VkglTestCase_000280_2 "ssor.predefined_macros.line_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000280, VkglTestCase_000280_1, VkglTestCase_000280_2);

#define VkglTestCase_000281_1 "dEQP-GLES2.functional.shaders.prepro"
#define VkglTestCase_000281_2 "cessor.predefined_macros.file_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000281, VkglTestCase_000281_1, VkglTestCase_000281_2);

#define VkglTestCase_000282_1 "dEQP-GLES2.functional.shaders.preproc"
#define VkglTestCase_000282_2 "essor.predefined_macros.file_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000282, VkglTestCase_000282_1, VkglTestCase_000282_2);

#define VkglTestCase_000283_1 "dEQP-GLES2.functional.shaders.preproce"
#define VkglTestCase_000283_2 "ssor.predefined_macros.if_gl_es_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000283, VkglTestCase_000283_1, VkglTestCase_000283_2);

#define VkglTestCase_000284_1 "dEQP-GLES2.functional.shaders.preproces"
#define VkglTestCase_000284_2 "sor.predefined_macros.if_gl_es_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000284, VkglTestCase_000284_1, VkglTestCase_000284_2);

#define VkglTestCase_000285_1 "dEQP-GLES2.functional.shaders.preproces"
#define VkglTestCase_000285_2 "sor.predefined_macros.if_version_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000285, VkglTestCase_000285_1, VkglTestCase_000285_2);

#define VkglTestCase_000286_1 "dEQP-GLES2.functional.shaders.preprocess"
#define VkglTestCase_000286_2 "or.predefined_macros.if_version_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000286, VkglTestCase_000286_1, VkglTestCase_000286_2);
