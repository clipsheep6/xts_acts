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

#define VkglTestCase_004153_1 "dEQP-GLES3.functional.shaders.fu"
#define VkglTestCase_004153_2 "nctions.declarations.basic_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004153, VkglTestCase_004153_1, VkglTestCase_004153_2);

#define VkglTestCase_004154_1 "dEQP-GLES3.functional.shaders.fun"
#define VkglTestCase_004154_2 "ctions.declarations.basic_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004154, VkglTestCase_004154_1, VkglTestCase_004154_2);

#define VkglTestCase_004155_1 "dEQP-GLES3.functional.shaders.func"
#define VkglTestCase_004155_2 "tions.declarations.basic_arg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004155, VkglTestCase_004155_1, VkglTestCase_004155_2);

#define VkglTestCase_004156_1 "dEQP-GLES3.functional.shaders.funct"
#define VkglTestCase_004156_2 "ions.declarations.basic_arg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004156, VkglTestCase_004156_1, VkglTestCase_004156_2);

#define VkglTestCase_004157_1 "dEQP-GLES3.functional.shaders.function"
#define VkglTestCase_004157_2 "s.declarations.define_after_use_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004157, VkglTestCase_004157_1, VkglTestCase_004157_2);

#define VkglTestCase_004158_1 "dEQP-GLES3.functional.shaders.functions"
#define VkglTestCase_004158_2 ".declarations.define_after_use_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004158, VkglTestCase_004158_1, VkglTestCase_004158_2);

#define VkglTestCase_004159_1 "dEQP-GLES3.functional.shaders.functio"
#define VkglTestCase_004159_2 "ns.declarations.double_declare_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004159, VkglTestCase_004159_1, VkglTestCase_004159_2);

#define VkglTestCase_004160_1 "dEQP-GLES3.functional.shaders.function"
#define VkglTestCase_004160_2 "s.declarations.double_declare_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004160, VkglTestCase_004160_1, VkglTestCase_004160_2);

#define VkglTestCase_004161_1 "dEQP-GLES3.functional.shaders.functions."
#define VkglTestCase_004161_2 "declarations.declare_after_define_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004161, VkglTestCase_004161_1, VkglTestCase_004161_2);

#define VkglTestCase_004162_1 "dEQP-GLES3.functional.shaders.functions.d"
#define VkglTestCase_004162_2 "eclarations.declare_after_define_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004162, VkglTestCase_004162_1, VkglTestCase_004162_2);

#define VkglTestCase_004163_1 "dEQP-GLES3.functional.shaders.functio"
#define VkglTestCase_004163_2 "ns.declarations.void_vs_no_void_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004163, VkglTestCase_004163_1, VkglTestCase_004163_2);

#define VkglTestCase_004164_1 "dEQP-GLES3.functional.shaders.function"
#define VkglTestCase_004164_2 "s.declarations.void_vs_no_void_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004164, VkglTestCase_004164_1, VkglTestCase_004164_2);

#define VkglTestCase_004165_1 "dEQP-GLES3.functional.shaders.funct"
#define VkglTestCase_004165_2 "ions.declarations.in_vs_no_in_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004165, VkglTestCase_004165_1, VkglTestCase_004165_2);

#define VkglTestCase_004166_1 "dEQP-GLES3.functional.shaders.functi"
#define VkglTestCase_004166_2 "ons.declarations.in_vs_no_in_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004166, VkglTestCase_004166_1, VkglTestCase_004166_2);

#define VkglTestCase_004167_1 "dEQP-GLES3.functional.shaders.functions.decl"
#define VkglTestCase_004167_2 "arations.default_vs_explicit_precision_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004167, VkglTestCase_004167_1, VkglTestCase_004167_2);

#define VkglTestCase_004168_1 "dEQP-GLES3.functional.shaders.functions.decla"
#define VkglTestCase_004168_2 "rations.default_vs_explicit_precision_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004168, VkglTestCase_004168_1, VkglTestCase_004168_2);
