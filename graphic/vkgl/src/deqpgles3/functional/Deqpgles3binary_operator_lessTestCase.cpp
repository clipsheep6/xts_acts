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
#include "../ActsDeqpgles30012TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_011912_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_011912_2 ".binary_operator.less.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011912, VkglTestCase_011912_1, VkglTestCase_011912_2);

#define VkglTestCase_011913_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_011913_2 "binary_operator.less.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011913, VkglTestCase_011913_1, VkglTestCase_011913_2);

#define VkglTestCase_011914_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_011914_2 "inary_operator.less.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011914, VkglTestCase_011914_1, VkglTestCase_011914_2);

#define VkglTestCase_011915_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_011915_2 "nary_operator.less.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011915, VkglTestCase_011915_1, VkglTestCase_011915_2);

#define VkglTestCase_011916_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_011916_2 "binary_operator.less.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011916, VkglTestCase_011916_1, VkglTestCase_011916_2);

#define VkglTestCase_011917_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_011917_2 "inary_operator.less.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011917, VkglTestCase_011917_1, VkglTestCase_011917_2);

#define VkglTestCase_011918_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_011918_2 "r.binary_operator.less.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011918, VkglTestCase_011918_1, VkglTestCase_011918_2);

#define VkglTestCase_011919_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_011919_2 ".binary_operator.less.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011919, VkglTestCase_011919_1, VkglTestCase_011919_2);

#define VkglTestCase_011920_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_011920_2 "binary_operator.less.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011920, VkglTestCase_011920_1, VkglTestCase_011920_2);

#define VkglTestCase_011921_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_011921_2 "inary_operator.less.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011921, VkglTestCase_011921_1, VkglTestCase_011921_2);

#define VkglTestCase_011922_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_011922_2 ".binary_operator.less.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011922, VkglTestCase_011922_1, VkglTestCase_011922_2);

#define VkglTestCase_011923_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_011923_2 "binary_operator.less.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011923, VkglTestCase_011923_1, VkglTestCase_011923_2);

#define VkglTestCase_011924_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_011924_2 ".binary_operator.less.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011924, VkglTestCase_011924_1, VkglTestCase_011924_2);

#define VkglTestCase_011925_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_011925_2 "binary_operator.less.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011925, VkglTestCase_011925_1, VkglTestCase_011925_2);

#define VkglTestCase_011926_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_011926_2 "binary_operator.less.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011926, VkglTestCase_011926_1, VkglTestCase_011926_2);

#define VkglTestCase_011927_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_011927_2 "inary_operator.less.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011927, VkglTestCase_011927_1, VkglTestCase_011927_2);

#define VkglTestCase_011928_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_011928_2 ".binary_operator.less.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011928, VkglTestCase_011928_1, VkglTestCase_011928_2);

#define VkglTestCase_011929_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_011929_2 "binary_operator.less.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011929, VkglTestCase_011929_1, VkglTestCase_011929_2);
