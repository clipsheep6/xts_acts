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
#include "../ActsDeqpgles30017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016410_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_016410_2 "s.return.single_return_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016410, VkglTestCase_016410_1, VkglTestCase_016410_2);

#define VkglTestCase_016411_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_016411_2 ".return.single_return_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016411, VkglTestCase_016411_1, VkglTestCase_016411_2);

#define VkglTestCase_016412_1 "dEQP-GLES3.functional.shaders.retu"
#define VkglTestCase_016412_2 "rn.conditional_return_always_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016412, VkglTestCase_016412_1, VkglTestCase_016412_2);

#define VkglTestCase_016413_1 "dEQP-GLES3.functional.shaders.retur"
#define VkglTestCase_016413_2 "n.conditional_return_always_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016413, VkglTestCase_016413_1, VkglTestCase_016413_2);

#define VkglTestCase_016414_1 "dEQP-GLES3.functional.shaders.retu"
#define VkglTestCase_016414_2 "rn.conditional_return_never_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016414, VkglTestCase_016414_1, VkglTestCase_016414_2);

#define VkglTestCase_016415_1 "dEQP-GLES3.functional.shaders.retur"
#define VkglTestCase_016415_2 "n.conditional_return_never_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016415, VkglTestCase_016415_1, VkglTestCase_016415_2);

#define VkglTestCase_016416_1 "dEQP-GLES3.functional.shaders.retur"
#define VkglTestCase_016416_2 "n.conditional_return_dynamic_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016416, VkglTestCase_016416_1, VkglTestCase_016416_2);

#define VkglTestCase_016417_1 "dEQP-GLES3.functional.shaders.return"
#define VkglTestCase_016417_2 ".conditional_return_dynamic_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016417, VkglTestCase_016417_1, VkglTestCase_016417_2);

#define VkglTestCase_016418_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_016418_2 "s.return.double_return_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016418, VkglTestCase_016418_1, VkglTestCase_016418_2);

#define VkglTestCase_016419_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_016419_2 ".return.double_return_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016419, VkglTestCase_016419_1, VkglTestCase_016419_2);

#define VkglTestCase_016420_1 "dEQP-GLES3.functional.shaders.ret"
#define VkglTestCase_016420_2 "urn.last_statement_in_main_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016420, VkglTestCase_016420_1, VkglTestCase_016420_2);

#define VkglTestCase_016421_1 "dEQP-GLES3.functional.shaders.retu"
#define VkglTestCase_016421_2 "rn.last_statement_in_main_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016421, VkglTestCase_016421_1, VkglTestCase_016421_2);

#define VkglTestCase_016422_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_016422_2 "eturn.output_write_always_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016422, VkglTestCase_016422_1, VkglTestCase_016422_2);

#define VkglTestCase_016423_1 "dEQP-GLES3.functional.shaders.re"
#define VkglTestCase_016423_2 "turn.output_write_always_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016423, VkglTestCase_016423_1, VkglTestCase_016423_2);

#define VkglTestCase_016424_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_016424_2 "eturn.output_write_never_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016424, VkglTestCase_016424_1, VkglTestCase_016424_2);

#define VkglTestCase_016425_1 "dEQP-GLES3.functional.shaders.re"
#define VkglTestCase_016425_2 "turn.output_write_never_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016425, VkglTestCase_016425_1, VkglTestCase_016425_2);

#define VkglTestCase_016426_1 "dEQP-GLES3.functional.shaders.re"
#define VkglTestCase_016426_2 "turn.output_write_dynamic_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016426, VkglTestCase_016426_1, VkglTestCase_016426_2);

#define VkglTestCase_016427_1 "dEQP-GLES3.functional.shaders.ret"
#define VkglTestCase_016427_2 "urn.output_write_dynamic_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016427, VkglTestCase_016427_1, VkglTestCase_016427_2);

#define VkglTestCase_016428_1 "dEQP-GLES3.functional.shaders.retur"
#define VkglTestCase_016428_2 "n.output_write_in_func_always_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016428, VkglTestCase_016428_1, VkglTestCase_016428_2);

#define VkglTestCase_016429_1 "dEQP-GLES3.functional.shaders.return"
#define VkglTestCase_016429_2 ".output_write_in_func_always_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016429, VkglTestCase_016429_1, VkglTestCase_016429_2);

#define VkglTestCase_016430_1 "dEQP-GLES3.functional.shaders.retur"
#define VkglTestCase_016430_2 "n.output_write_in_func_never_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016430, VkglTestCase_016430_1, VkglTestCase_016430_2);

#define VkglTestCase_016431_1 "dEQP-GLES3.functional.shaders.return"
#define VkglTestCase_016431_2 ".output_write_in_func_never_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016431, VkglTestCase_016431_1, VkglTestCase_016431_2);

#define VkglTestCase_016432_1 "dEQP-GLES3.functional.shaders.return"
#define VkglTestCase_016432_2 ".output_write_in_func_dynamic_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016432, VkglTestCase_016432_1, VkglTestCase_016432_2);

#define VkglTestCase_016433_1 "dEQP-GLES3.functional.shaders.return."
#define VkglTestCase_016433_2 "output_write_in_func_dynamic_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016433, VkglTestCase_016433_1, VkglTestCase_016433_2);

#define VkglTestCase_016434_1 "dEQP-GLES3.functional.shaders.return"
#define VkglTestCase_016434_2 ".return_in_static_loop_always_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016434, VkglTestCase_016434_1, VkglTestCase_016434_2);

#define VkglTestCase_016435_1 "dEQP-GLES3.functional.shaders.return."
#define VkglTestCase_016435_2 "return_in_static_loop_always_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016435, VkglTestCase_016435_1, VkglTestCase_016435_2);

#define VkglTestCase_016436_1 "dEQP-GLES3.functional.shaders.retur"
#define VkglTestCase_016436_2 "n.return_in_static_loop_never_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016436, VkglTestCase_016436_1, VkglTestCase_016436_2);

#define VkglTestCase_016437_1 "dEQP-GLES3.functional.shaders.return"
#define VkglTestCase_016437_2 ".return_in_static_loop_never_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016437, VkglTestCase_016437_1, VkglTestCase_016437_2);

#define VkglTestCase_016438_1 "dEQP-GLES3.functional.shaders.return"
#define VkglTestCase_016438_2 ".return_in_static_loop_dynamic_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016438, VkglTestCase_016438_1, VkglTestCase_016438_2);

#define VkglTestCase_016439_1 "dEQP-GLES3.functional.shaders.return."
#define VkglTestCase_016439_2 "return_in_static_loop_dynamic_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016439, VkglTestCase_016439_1, VkglTestCase_016439_2);

#define VkglTestCase_016440_1 "dEQP-GLES3.functional.shaders.return"
#define VkglTestCase_016440_2 ".return_in_dynamic_loop_always_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016440, VkglTestCase_016440_1, VkglTestCase_016440_2);

#define VkglTestCase_016441_1 "dEQP-GLES3.functional.shaders.return."
#define VkglTestCase_016441_2 "return_in_dynamic_loop_always_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016441, VkglTestCase_016441_1, VkglTestCase_016441_2);

#define VkglTestCase_016442_1 "dEQP-GLES3.functional.shaders.return"
#define VkglTestCase_016442_2 ".return_in_dynamic_loop_never_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016442, VkglTestCase_016442_1, VkglTestCase_016442_2);

#define VkglTestCase_016443_1 "dEQP-GLES3.functional.shaders.return."
#define VkglTestCase_016443_2 "return_in_dynamic_loop_never_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016443, VkglTestCase_016443_1, VkglTestCase_016443_2);

#define VkglTestCase_016444_1 "dEQP-GLES3.functional.shaders.return."
#define VkglTestCase_016444_2 "return_in_dynamic_loop_dynamic_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016444, VkglTestCase_016444_1, VkglTestCase_016444_2);

#define VkglTestCase_016445_1 "dEQP-GLES3.functional.shaders.return.r"
#define VkglTestCase_016445_2 "eturn_in_dynamic_loop_dynamic_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016445, VkglTestCase_016445_1, VkglTestCase_016445_2);

#define VkglTestCase_016446_1 "dEQP-GLES3.functional.shaders.ret"
#define VkglTestCase_016446_2 "urn.return_in_infinite_loop_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016446, VkglTestCase_016446_1, VkglTestCase_016446_2);

#define VkglTestCase_016447_1 "dEQP-GLES3.functional.shaders.retu"
#define VkglTestCase_016447_2 "rn.return_in_infinite_loop_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016447, VkglTestCase_016447_1, VkglTestCase_016447_2);
