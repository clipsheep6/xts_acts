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

#define VkglTestCase_000872_1 "dEQP-GLES3.functional.shaders.preproc"
#define VkglTestCase_000872_2 "essor.line_continuation.comment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000872, VkglTestCase_000872_1, VkglTestCase_000872_2);

#define VkglTestCase_000873_1 "dEQP-GLES3.functional.shaders.preproce"
#define VkglTestCase_000873_2 "ssor.line_continuation.comment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000873, VkglTestCase_000873_1, VkglTestCase_000873_2);

#define VkglTestCase_000874_1 "dEQP-GLES3.functional.shaders.preproc"
#define VkglTestCase_000874_2 "essor.line_continuation.define_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000874, VkglTestCase_000874_1, VkglTestCase_000874_2);

#define VkglTestCase_000875_1 "dEQP-GLES3.functional.shaders.preproce"
#define VkglTestCase_000875_2 "ssor.line_continuation.define_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000875, VkglTestCase_000875_1, VkglTestCase_000875_2);

#define VkglTestCase_000876_1 "dEQP-GLES3.functional.shaders.preprocessor."
#define VkglTestCase_000876_2 "line_continuation.preprocessing_token_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000876, VkglTestCase_000876_1, VkglTestCase_000876_2);

#define VkglTestCase_000877_1 "dEQP-GLES3.functional.shaders.preprocessor.l"
#define VkglTestCase_000877_2 "ine_continuation.preprocessing_token_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000877, VkglTestCase_000877_1, VkglTestCase_000877_2);

#define VkglTestCase_000878_1 "dEQP-GLES3.functional.shaders.prepro"
#define VkglTestCase_000878_2 "cessor.line_continuation.token_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000878, VkglTestCase_000878_1, VkglTestCase_000878_2);

#define VkglTestCase_000879_1 "dEQP-GLES3.functional.shaders.preproc"
#define VkglTestCase_000879_2 "essor.line_continuation.token_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000879, VkglTestCase_000879_1, VkglTestCase_000879_2);

#define VkglTestCase_000880_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_000880_2 "r.line_continuation.middle_of_line_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000880, VkglTestCase_000880_1, VkglTestCase_000880_2);

#define VkglTestCase_000881_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_000881_2 ".line_continuation.middle_of_line_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000881, VkglTestCase_000881_1, VkglTestCase_000881_2);
