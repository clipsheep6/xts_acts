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
#include "../ActsDeqpgles20003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002137_1 "dEQP-GLES2.functional.shaders.functi"
#define VkglTestCase_002137_2 "ons.control_flow.simple_return_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002137, VkglTestCase_002137_1, VkglTestCase_002137_2);

#define VkglTestCase_002138_1 "dEQP-GLES2.functional.shaders.functio"
#define VkglTestCase_002138_2 "ns.control_flow.simple_return_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002138, VkglTestCase_002138_1, VkglTestCase_002138_2);

#define VkglTestCase_002139_1 "dEQP-GLES2.functional.shaders.functi"
#define VkglTestCase_002139_2 "ons.control_flow.return_in_if_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002139, VkglTestCase_002139_1, VkglTestCase_002139_2);

#define VkglTestCase_002140_1 "dEQP-GLES2.functional.shaders.functio"
#define VkglTestCase_002140_2 "ns.control_flow.return_in_if_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002140, VkglTestCase_002140_1, VkglTestCase_002140_2);

#define VkglTestCase_002141_1 "dEQP-GLES2.functional.shaders.functio"
#define VkglTestCase_002141_2 "ns.control_flow.return_in_else_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002141, VkglTestCase_002141_1, VkglTestCase_002141_2);

#define VkglTestCase_002142_1 "dEQP-GLES2.functional.shaders.function"
#define VkglTestCase_002142_2 "s.control_flow.return_in_else_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002142, VkglTestCase_002142_1, VkglTestCase_002142_2);

#define VkglTestCase_002143_1 "dEQP-GLES2.functional.shaders.functio"
#define VkglTestCase_002143_2 "ns.control_flow.return_in_loop_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002143, VkglTestCase_002143_1, VkglTestCase_002143_2);

#define VkglTestCase_002144_1 "dEQP-GLES2.functional.shaders.function"
#define VkglTestCase_002144_2 "s.control_flow.return_in_loop_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002144, VkglTestCase_002144_1, VkglTestCase_002144_2);

#define VkglTestCase_002145_1 "dEQP-GLES2.functional.shaders.function"
#define VkglTestCase_002145_2 "s.control_flow.return_in_loop_if_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002145, VkglTestCase_002145_1, VkglTestCase_002145_2);

#define VkglTestCase_002146_1 "dEQP-GLES2.functional.shaders.functions"
#define VkglTestCase_002146_2 ".control_flow.return_in_loop_if_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002146, VkglTestCase_002146_1, VkglTestCase_002146_2);

#define VkglTestCase_002147_1 "dEQP-GLES2.functional.shaders.function"
#define VkglTestCase_002147_2 "s.control_flow.return_after_loop_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002147, VkglTestCase_002147_1, VkglTestCase_002147_2);

#define VkglTestCase_002148_1 "dEQP-GLES2.functional.shaders.functions"
#define VkglTestCase_002148_2 ".control_flow.return_after_loop_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002148, VkglTestCase_002148_1, VkglTestCase_002148_2);

#define VkglTestCase_002149_1 "dEQP-GLES2.functional.shaders.functions"
#define VkglTestCase_002149_2 ".control_flow.return_after_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002149, VkglTestCase_002149_1, VkglTestCase_002149_2);

#define VkglTestCase_002150_1 "dEQP-GLES2.functional.shaders.functions."
#define VkglTestCase_002150_2 "control_flow.return_after_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002150, VkglTestCase_002150_1, VkglTestCase_002150_2);

#define VkglTestCase_002151_1 "dEQP-GLES2.functional.shaders.functions."
#define VkglTestCase_002151_2 "control_flow.return_after_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002151, VkglTestCase_002151_1, VkglTestCase_002151_2);

#define VkglTestCase_002152_1 "dEQP-GLES2.functional.shaders.functions.c"
#define VkglTestCase_002152_2 "ontrol_flow.return_after_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002152, VkglTestCase_002152_1, VkglTestCase_002152_2);

#define VkglTestCase_002153_1 "dEQP-GLES2.functional.shaders.functions."
#define VkglTestCase_002153_2 "control_flow.return_in_nested_loop_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002153, VkglTestCase_002153_1, VkglTestCase_002153_2);

#define VkglTestCase_002154_1 "dEQP-GLES2.functional.shaders.functions.c"
#define VkglTestCase_002154_2 "ontrol_flow.return_in_nested_loop_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002154, VkglTestCase_002154_1, VkglTestCase_002154_2);

#define VkglTestCase_002155_1 "dEQP-GLES2.functional.shaders.functions.con"
#define VkglTestCase_002155_2 "trol_flow.return_after_loop_sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002155, VkglTestCase_002155_1, VkglTestCase_002155_2);

#define VkglTestCase_002156_1 "dEQP-GLES2.functional.shaders.functions.cont"
#define VkglTestCase_002156_2 "rol_flow.return_after_loop_sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002156, VkglTestCase_002156_1, VkglTestCase_002156_2);

#define VkglTestCase_002157_1 "dEQP-GLES2.functional.shaders.functions.con"
#define VkglTestCase_002157_2 "trol_flow.mixed_return_break_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002157, VkglTestCase_002157_1, VkglTestCase_002157_2);

#define VkglTestCase_002158_1 "dEQP-GLES2.functional.shaders.functions.cont"
#define VkglTestCase_002158_2 "rol_flow.mixed_return_break_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002158, VkglTestCase_002158_1, VkglTestCase_002158_2);
