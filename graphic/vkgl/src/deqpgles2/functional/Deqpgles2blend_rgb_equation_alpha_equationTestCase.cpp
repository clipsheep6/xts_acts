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
#include "../ActsDeqpgles20013TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_012203_1 "dEQP-GLES2.functional.fragment_ops.ble"
#define VkglTestCase_012203_2 "nd.rgb_equation_alpha_equation.add_add"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012203, VkglTestCase_012203_1, VkglTestCase_012203_2);

#define VkglTestCase_012204_1 "dEQP-GLES2.functional.fragment_ops.blend"
#define VkglTestCase_012204_2 ".rgb_equation_alpha_equation.add_subtract"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012204, VkglTestCase_012204_1, VkglTestCase_012204_2);

#define VkglTestCase_012205_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_012205_2 "_equation_alpha_equation.add_reverse_subtract"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012205, VkglTestCase_012205_1, VkglTestCase_012205_2);

#define VkglTestCase_012206_1 "dEQP-GLES2.functional.fragment_ops.blend"
#define VkglTestCase_012206_2 ".rgb_equation_alpha_equation.subtract_add"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012206, VkglTestCase_012206_1, VkglTestCase_012206_2);

#define VkglTestCase_012207_1 "dEQP-GLES2.functional.fragment_ops.blend.rg"
#define VkglTestCase_012207_2 "b_equation_alpha_equation.subtract_subtract"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012207, VkglTestCase_012207_1, VkglTestCase_012207_2);

#define VkglTestCase_012208_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_eq"
#define VkglTestCase_012208_2 "uation_alpha_equation.subtract_reverse_subtract"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012208, VkglTestCase_012208_1, VkglTestCase_012208_2);

#define VkglTestCase_012209_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_012209_2 "_equation_alpha_equation.reverse_subtract_add"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012209, VkglTestCase_012209_1, VkglTestCase_012209_2);

#define VkglTestCase_012210_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_eq"
#define VkglTestCase_012210_2 "uation_alpha_equation.reverse_subtract_subtract"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012210, VkglTestCase_012210_1, VkglTestCase_012210_2);

#define VkglTestCase_012211_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_equati"
#define VkglTestCase_012211_2 "on_alpha_equation.reverse_subtract_reverse_subtract"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012211, VkglTestCase_012211_1, VkglTestCase_012211_2);
