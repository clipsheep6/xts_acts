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
#include "../ActsDeqpgles30005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_004207_1 "dEQP-GLES3.functional.shaders.functi"
#define VkglTestCase_004207_2 "ons.control_flow.simple_return_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004207, VkglTestCase_004207_1, VkglTestCase_004207_2);

#define VkglTestCase_004208_1 "dEQP-GLES3.functional.shaders.functio"
#define VkglTestCase_004208_2 "ns.control_flow.simple_return_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004208, VkglTestCase_004208_1, VkglTestCase_004208_2);

#define VkglTestCase_004209_1 "dEQP-GLES3.functional.shaders.functi"
#define VkglTestCase_004209_2 "ons.control_flow.return_in_if_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004209, VkglTestCase_004209_1, VkglTestCase_004209_2);

#define VkglTestCase_004210_1 "dEQP-GLES3.functional.shaders.functio"
#define VkglTestCase_004210_2 "ns.control_flow.return_in_if_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004210, VkglTestCase_004210_1, VkglTestCase_004210_2);

#define VkglTestCase_004211_1 "dEQP-GLES3.functional.shaders.functio"
#define VkglTestCase_004211_2 "ns.control_flow.return_in_else_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004211, VkglTestCase_004211_1, VkglTestCase_004211_2);

#define VkglTestCase_004212_1 "dEQP-GLES3.functional.shaders.function"
#define VkglTestCase_004212_2 "s.control_flow.return_in_else_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004212, VkglTestCase_004212_1, VkglTestCase_004212_2);

#define VkglTestCase_004213_1 "dEQP-GLES3.functional.shaders.functio"
#define VkglTestCase_004213_2 "ns.control_flow.return_in_loop_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004213, VkglTestCase_004213_1, VkglTestCase_004213_2);

#define VkglTestCase_004214_1 "dEQP-GLES3.functional.shaders.function"
#define VkglTestCase_004214_2 "s.control_flow.return_in_loop_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004214, VkglTestCase_004214_1, VkglTestCase_004214_2);

#define VkglTestCase_004215_1 "dEQP-GLES3.functional.shaders.function"
#define VkglTestCase_004215_2 "s.control_flow.return_in_loop_if_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004215, VkglTestCase_004215_1, VkglTestCase_004215_2);

#define VkglTestCase_004216_1 "dEQP-GLES3.functional.shaders.functions"
#define VkglTestCase_004216_2 ".control_flow.return_in_loop_if_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004216, VkglTestCase_004216_1, VkglTestCase_004216_2);

#define VkglTestCase_004217_1 "dEQP-GLES3.functional.shaders.function"
#define VkglTestCase_004217_2 "s.control_flow.return_after_loop_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004217, VkglTestCase_004217_1, VkglTestCase_004217_2);

#define VkglTestCase_004218_1 "dEQP-GLES3.functional.shaders.functions"
#define VkglTestCase_004218_2 ".control_flow.return_after_loop_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004218, VkglTestCase_004218_1, VkglTestCase_004218_2);

#define VkglTestCase_004219_1 "dEQP-GLES3.functional.shaders.functions"
#define VkglTestCase_004219_2 ".control_flow.return_after_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004219, VkglTestCase_004219_1, VkglTestCase_004219_2);

#define VkglTestCase_004220_1 "dEQP-GLES3.functional.shaders.functions."
#define VkglTestCase_004220_2 "control_flow.return_after_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004220, VkglTestCase_004220_1, VkglTestCase_004220_2);

#define VkglTestCase_004221_1 "dEQP-GLES3.functional.shaders.functions."
#define VkglTestCase_004221_2 "control_flow.return_after_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004221, VkglTestCase_004221_1, VkglTestCase_004221_2);

#define VkglTestCase_004222_1 "dEQP-GLES3.functional.shaders.functions.c"
#define VkglTestCase_004222_2 "ontrol_flow.return_after_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004222, VkglTestCase_004222_1, VkglTestCase_004222_2);

#define VkglTestCase_004223_1 "dEQP-GLES3.functional.shaders.functions."
#define VkglTestCase_004223_2 "control_flow.return_in_nested_loop_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004223, VkglTestCase_004223_1, VkglTestCase_004223_2);

#define VkglTestCase_004224_1 "dEQP-GLES3.functional.shaders.functions.c"
#define VkglTestCase_004224_2 "ontrol_flow.return_in_nested_loop_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004224, VkglTestCase_004224_1, VkglTestCase_004224_2);

#define VkglTestCase_004225_1 "dEQP-GLES3.functional.shaders.functions.con"
#define VkglTestCase_004225_2 "trol_flow.return_after_loop_sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004225, VkglTestCase_004225_1, VkglTestCase_004225_2);

#define VkglTestCase_004226_1 "dEQP-GLES3.functional.shaders.functions.cont"
#define VkglTestCase_004226_2 "rol_flow.return_after_loop_sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004226, VkglTestCase_004226_1, VkglTestCase_004226_2);

#define VkglTestCase_004227_1 "dEQP-GLES3.functional.shaders.functions.con"
#define VkglTestCase_004227_2 "trol_flow.mixed_return_break_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004227, VkglTestCase_004227_1, VkglTestCase_004227_2);

#define VkglTestCase_004228_1 "dEQP-GLES3.functional.shaders.functions.cont"
#define VkglTestCase_004228_2 "rol_flow.mixed_return_break_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004228, VkglTestCase_004228_1, VkglTestCase_004228_2);
