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
#include "../ActsDeqpgles30001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000946_1 "dEQP-GLES3.functional.shaders.preproc"
#define VkglTestCase_000946_2 "essor.predefined_macros.version_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000946, VkglTestCase_000946_1, VkglTestCase_000946_2);

#define VkglTestCase_000947_1 "dEQP-GLES3.functional.shaders.preproce"
#define VkglTestCase_000947_2 "ssor.predefined_macros.version_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000947, VkglTestCase_000947_1, VkglTestCase_000947_2);

#define VkglTestCase_000948_1 "dEQP-GLES3.functional.shaders.preproc"
#define VkglTestCase_000948_2 "essor.predefined_macros.gl_es_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000948, VkglTestCase_000948_1, VkglTestCase_000948_2);

#define VkglTestCase_000949_1 "dEQP-GLES3.functional.shaders.preproce"
#define VkglTestCase_000949_2 "ssor.predefined_macros.gl_es_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000949, VkglTestCase_000949_1, VkglTestCase_000949_2);

#define VkglTestCase_000950_1 "dEQP-GLES3.functional.shaders.preproc"
#define VkglTestCase_000950_2 "essor.predefined_macros.gl_es_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000950, VkglTestCase_000950_1, VkglTestCase_000950_2);

#define VkglTestCase_000951_1 "dEQP-GLES3.functional.shaders.preproce"
#define VkglTestCase_000951_2 "ssor.predefined_macros.gl_es_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000951, VkglTestCase_000951_1, VkglTestCase_000951_2);

#define VkglTestCase_000952_1 "dEQP-GLES3.functional.shaders.preproc"
#define VkglTestCase_000952_2 "essor.predefined_macros.line_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000952, VkglTestCase_000952_1, VkglTestCase_000952_2);

#define VkglTestCase_000953_1 "dEQP-GLES3.functional.shaders.preproce"
#define VkglTestCase_000953_2 "ssor.predefined_macros.line_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000953, VkglTestCase_000953_1, VkglTestCase_000953_2);

#define VkglTestCase_000954_1 "dEQP-GLES3.functional.shaders.prepro"
#define VkglTestCase_000954_2 "cessor.predefined_macros.file_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000954, VkglTestCase_000954_1, VkglTestCase_000954_2);

#define VkglTestCase_000955_1 "dEQP-GLES3.functional.shaders.preproc"
#define VkglTestCase_000955_2 "essor.predefined_macros.file_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000955, VkglTestCase_000955_1, VkglTestCase_000955_2);

#define VkglTestCase_000956_1 "dEQP-GLES3.functional.shaders.preproce"
#define VkglTestCase_000956_2 "ssor.predefined_macros.if_gl_es_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000956, VkglTestCase_000956_1, VkglTestCase_000956_2);

#define VkglTestCase_000957_1 "dEQP-GLES3.functional.shaders.preproces"
#define VkglTestCase_000957_2 "sor.predefined_macros.if_gl_es_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000957, VkglTestCase_000957_1, VkglTestCase_000957_2);

#define VkglTestCase_000958_1 "dEQP-GLES3.functional.shaders.preproces"
#define VkglTestCase_000958_2 "sor.predefined_macros.if_version_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000958, VkglTestCase_000958_1, VkglTestCase_000958_2);

#define VkglTestCase_000959_1 "dEQP-GLES3.functional.shaders.preprocess"
#define VkglTestCase_000959_2 "or.predefined_macros.if_version_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000959, VkglTestCase_000959_1, VkglTestCase_000959_2);
