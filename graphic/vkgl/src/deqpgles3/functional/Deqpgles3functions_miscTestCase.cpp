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

#define VkglTestCase_004229_1 "dEQP-GLES3.functional.shaders.fun"
#define VkglTestCase_004229_2 "ctions.misc.multi_arg_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004229, VkglTestCase_004229_1, VkglTestCase_004229_2);

#define VkglTestCase_004230_1 "dEQP-GLES3.functional.shaders.func"
#define VkglTestCase_004230_2 "tions.misc.multi_arg_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004230, VkglTestCase_004230_1, VkglTestCase_004230_2);

#define VkglTestCase_004231_1 "dEQP-GLES3.functional.shaders.fu"
#define VkglTestCase_004231_2 "nctions.misc.multi_arg_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004231, VkglTestCase_004231_1, VkglTestCase_004231_2);

#define VkglTestCase_004232_1 "dEQP-GLES3.functional.shaders.fun"
#define VkglTestCase_004232_2 "ctions.misc.multi_arg_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004232, VkglTestCase_004232_1, VkglTestCase_004232_2);

#define VkglTestCase_004233_1 "dEQP-GLES3.functional.shaders.functi"
#define VkglTestCase_004233_2 "ons.misc.argument_eval_order_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004233, VkglTestCase_004233_1, VkglTestCase_004233_2);

#define VkglTestCase_004234_1 "dEQP-GLES3.functional.shaders.functio"
#define VkglTestCase_004234_2 "ns.misc.argument_eval_order_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004234, VkglTestCase_004234_1, VkglTestCase_004234_2);

#define VkglTestCase_004235_1 "dEQP-GLES3.functional.shaders.functi"
#define VkglTestCase_004235_2 "ons.misc.argument_eval_order_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004235, VkglTestCase_004235_1, VkglTestCase_004235_2);

#define VkglTestCase_004236_1 "dEQP-GLES3.functional.shaders.functio"
#define VkglTestCase_004236_2 "ns.misc.argument_eval_order_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004236, VkglTestCase_004236_1, VkglTestCase_004236_2);
