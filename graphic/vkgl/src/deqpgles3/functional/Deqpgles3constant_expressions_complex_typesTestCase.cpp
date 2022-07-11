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
#include "../ActsDeqpgles30020TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_019674_1 "dEQP-GLES3.functional.shaders.constant_"
#define VkglTestCase_019674_2 "expressions.complex_types.struct_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019674, VkglTestCase_019674_1, VkglTestCase_019674_2);

#define VkglTestCase_019675_1 "dEQP-GLES3.functional.shaders.constant_e"
#define VkglTestCase_019675_2 "xpressions.complex_types.struct_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019675, VkglTestCase_019675_1, VkglTestCase_019675_2);

#define VkglTestCase_019676_1 "dEQP-GLES3.functional.shaders.constant_exp"
#define VkglTestCase_019676_2 "ressions.complex_types.nested_struct_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019676, VkglTestCase_019676_1, VkglTestCase_019676_2);

#define VkglTestCase_019677_1 "dEQP-GLES3.functional.shaders.constant_expr"
#define VkglTestCase_019677_2 "essions.complex_types.nested_struct_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019677, VkglTestCase_019677_1, VkglTestCase_019677_2);

#define VkglTestCase_019678_1 "dEQP-GLES3.functional.shaders.constant_ex"
#define VkglTestCase_019678_2 "pressions.complex_types.array_size_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019678, VkglTestCase_019678_1, VkglTestCase_019678_2);

#define VkglTestCase_019679_1 "dEQP-GLES3.functional.shaders.constant_exp"
#define VkglTestCase_019679_2 "ressions.complex_types.array_size_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019679, VkglTestCase_019679_1, VkglTestCase_019679_2);

#define VkglTestCase_019680_1 "dEQP-GLES3.functional.shaders.constant_exp"
#define VkglTestCase_019680_2 "ressions.complex_types.array_length_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019680, VkglTestCase_019680_1, VkglTestCase_019680_2);

#define VkglTestCase_019681_1 "dEQP-GLES3.functional.shaders.constant_expr"
#define VkglTestCase_019681_2 "essions.complex_types.array_length_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019681, VkglTestCase_019681_1, VkglTestCase_019681_2);

#define VkglTestCase_019682_1 "dEQP-GLES3.functional.shaders.constant"
#define VkglTestCase_019682_2 "_expressions.complex_types.array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019682, VkglTestCase_019682_1, VkglTestCase_019682_2);

#define VkglTestCase_019683_1 "dEQP-GLES3.functional.shaders.constant_"
#define VkglTestCase_019683_2 "expressions.complex_types.array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019683, VkglTestCase_019683_1, VkglTestCase_019683_2);
