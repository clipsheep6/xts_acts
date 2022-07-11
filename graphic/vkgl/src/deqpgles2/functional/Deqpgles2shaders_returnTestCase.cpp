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
#include "../ActsDeqpgles20008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007619_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_007619_2 "s.return.single_return_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007619, VkglTestCase_007619_1, VkglTestCase_007619_2);

#define VkglTestCase_007620_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_007620_2 ".return.single_return_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007620, VkglTestCase_007620_1, VkglTestCase_007620_2);

#define VkglTestCase_007621_1 "dEQP-GLES2.functional.shaders.retu"
#define VkglTestCase_007621_2 "rn.conditional_return_always_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007621, VkglTestCase_007621_1, VkglTestCase_007621_2);

#define VkglTestCase_007622_1 "dEQP-GLES2.functional.shaders.retur"
#define VkglTestCase_007622_2 "n.conditional_return_always_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007622, VkglTestCase_007622_1, VkglTestCase_007622_2);

#define VkglTestCase_007623_1 "dEQP-GLES2.functional.shaders.retu"
#define VkglTestCase_007623_2 "rn.conditional_return_never_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007623, VkglTestCase_007623_1, VkglTestCase_007623_2);

#define VkglTestCase_007624_1 "dEQP-GLES2.functional.shaders.retur"
#define VkglTestCase_007624_2 "n.conditional_return_never_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007624, VkglTestCase_007624_1, VkglTestCase_007624_2);

#define VkglTestCase_007625_1 "dEQP-GLES2.functional.shaders.retur"
#define VkglTestCase_007625_2 "n.conditional_return_dynamic_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007625, VkglTestCase_007625_1, VkglTestCase_007625_2);

#define VkglTestCase_007626_1 "dEQP-GLES2.functional.shaders.return"
#define VkglTestCase_007626_2 ".conditional_return_dynamic_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007626, VkglTestCase_007626_1, VkglTestCase_007626_2);

#define VkglTestCase_007627_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_007627_2 "s.return.double_return_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007627, VkglTestCase_007627_1, VkglTestCase_007627_2);

#define VkglTestCase_007628_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_007628_2 ".return.double_return_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007628, VkglTestCase_007628_1, VkglTestCase_007628_2);

#define VkglTestCase_007629_1 "dEQP-GLES2.functional.shaders.ret"
#define VkglTestCase_007629_2 "urn.last_statement_in_main_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007629, VkglTestCase_007629_1, VkglTestCase_007629_2);

#define VkglTestCase_007630_1 "dEQP-GLES2.functional.shaders.retu"
#define VkglTestCase_007630_2 "rn.last_statement_in_main_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007630, VkglTestCase_007630_1, VkglTestCase_007630_2);

#define VkglTestCase_007631_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_007631_2 "eturn.output_write_always_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007631, VkglTestCase_007631_1, VkglTestCase_007631_2);

#define VkglTestCase_007632_1 "dEQP-GLES2.functional.shaders.re"
#define VkglTestCase_007632_2 "turn.output_write_always_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007632, VkglTestCase_007632_1, VkglTestCase_007632_2);

#define VkglTestCase_007633_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_007633_2 "eturn.output_write_never_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007633, VkglTestCase_007633_1, VkglTestCase_007633_2);

#define VkglTestCase_007634_1 "dEQP-GLES2.functional.shaders.re"
#define VkglTestCase_007634_2 "turn.output_write_never_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007634, VkglTestCase_007634_1, VkglTestCase_007634_2);

#define VkglTestCase_007635_1 "dEQP-GLES2.functional.shaders.re"
#define VkglTestCase_007635_2 "turn.output_write_dynamic_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007635, VkglTestCase_007635_1, VkglTestCase_007635_2);

#define VkglTestCase_007636_1 "dEQP-GLES2.functional.shaders.ret"
#define VkglTestCase_007636_2 "urn.output_write_dynamic_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007636, VkglTestCase_007636_1, VkglTestCase_007636_2);

#define VkglTestCase_007637_1 "dEQP-GLES2.functional.shaders.retur"
#define VkglTestCase_007637_2 "n.output_write_in_func_always_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007637, VkglTestCase_007637_1, VkglTestCase_007637_2);

#define VkglTestCase_007638_1 "dEQP-GLES2.functional.shaders.return"
#define VkglTestCase_007638_2 ".output_write_in_func_always_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007638, VkglTestCase_007638_1, VkglTestCase_007638_2);

#define VkglTestCase_007639_1 "dEQP-GLES2.functional.shaders.retur"
#define VkglTestCase_007639_2 "n.output_write_in_func_never_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007639, VkglTestCase_007639_1, VkglTestCase_007639_2);

#define VkglTestCase_007640_1 "dEQP-GLES2.functional.shaders.return"
#define VkglTestCase_007640_2 ".output_write_in_func_never_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007640, VkglTestCase_007640_1, VkglTestCase_007640_2);

#define VkglTestCase_007641_1 "dEQP-GLES2.functional.shaders.return"
#define VkglTestCase_007641_2 ".output_write_in_func_dynamic_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007641, VkglTestCase_007641_1, VkglTestCase_007641_2);

#define VkglTestCase_007642_1 "dEQP-GLES2.functional.shaders.return."
#define VkglTestCase_007642_2 "output_write_in_func_dynamic_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007642, VkglTestCase_007642_1, VkglTestCase_007642_2);

#define VkglTestCase_007643_1 "dEQP-GLES2.functional.shaders.return"
#define VkglTestCase_007643_2 ".return_in_static_loop_always_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007643, VkglTestCase_007643_1, VkglTestCase_007643_2);

#define VkglTestCase_007644_1 "dEQP-GLES2.functional.shaders.return."
#define VkglTestCase_007644_2 "return_in_static_loop_always_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007644, VkglTestCase_007644_1, VkglTestCase_007644_2);

#define VkglTestCase_007645_1 "dEQP-GLES2.functional.shaders.retur"
#define VkglTestCase_007645_2 "n.return_in_static_loop_never_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007645, VkglTestCase_007645_1, VkglTestCase_007645_2);

#define VkglTestCase_007646_1 "dEQP-GLES2.functional.shaders.return"
#define VkglTestCase_007646_2 ".return_in_static_loop_never_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007646, VkglTestCase_007646_1, VkglTestCase_007646_2);

#define VkglTestCase_007647_1 "dEQP-GLES2.functional.shaders.return"
#define VkglTestCase_007647_2 ".return_in_static_loop_dynamic_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007647, VkglTestCase_007647_1, VkglTestCase_007647_2);

#define VkglTestCase_007648_1 "dEQP-GLES2.functional.shaders.return."
#define VkglTestCase_007648_2 "return_in_static_loop_dynamic_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007648, VkglTestCase_007648_1, VkglTestCase_007648_2);

#define VkglTestCase_007649_1 "dEQP-GLES2.functional.shaders.return"
#define VkglTestCase_007649_2 ".return_in_dynamic_loop_always_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007649, VkglTestCase_007649_1, VkglTestCase_007649_2);

#define VkglTestCase_007650_1 "dEQP-GLES2.functional.shaders.return."
#define VkglTestCase_007650_2 "return_in_dynamic_loop_always_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007650, VkglTestCase_007650_1, VkglTestCase_007650_2);

#define VkglTestCase_007651_1 "dEQP-GLES2.functional.shaders.return"
#define VkglTestCase_007651_2 ".return_in_dynamic_loop_never_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007651, VkglTestCase_007651_1, VkglTestCase_007651_2);

#define VkglTestCase_007652_1 "dEQP-GLES2.functional.shaders.return."
#define VkglTestCase_007652_2 "return_in_dynamic_loop_never_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007652, VkglTestCase_007652_1, VkglTestCase_007652_2);

#define VkglTestCase_007653_1 "dEQP-GLES2.functional.shaders.return."
#define VkglTestCase_007653_2 "return_in_dynamic_loop_dynamic_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007653, VkglTestCase_007653_1, VkglTestCase_007653_2);

#define VkglTestCase_007654_1 "dEQP-GLES2.functional.shaders.return.r"
#define VkglTestCase_007654_2 "eturn_in_dynamic_loop_dynamic_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007654, VkglTestCase_007654_1, VkglTestCase_007654_2);

#define VkglTestCase_007655_1 "dEQP-GLES2.functional.shaders.ret"
#define VkglTestCase_007655_2 "urn.return_in_infinite_loop_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007655, VkglTestCase_007655_1, VkglTestCase_007655_2);

#define VkglTestCase_007656_1 "dEQP-GLES2.functional.shaders.retu"
#define VkglTestCase_007656_2 "rn.return_in_infinite_loop_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007656, VkglTestCase_007656_1, VkglTestCase_007656_2);
