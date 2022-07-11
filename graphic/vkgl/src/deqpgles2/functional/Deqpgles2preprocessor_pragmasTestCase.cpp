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
#include "../ActsDeqpgles20001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000459_1 "dEQP-GLES2.functional.shaders.pr"
#define VkglTestCase_000459_2 "eprocessor.pragmas.pragma_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000459, VkglTestCase_000459_1, VkglTestCase_000459_2);

#define VkglTestCase_000460_1 "dEQP-GLES2.functional.shaders.pre"
#define VkglTestCase_000460_2 "processor.pragmas.pragma_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000460, VkglTestCase_000460_1, VkglTestCase_000460_2);

#define VkglTestCase_000461_1 "dEQP-GLES2.functional.shaders.preproc"
#define VkglTestCase_000461_2 "essor.pragmas.pragma_macro_exp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000461, VkglTestCase_000461_1, VkglTestCase_000461_2);

#define VkglTestCase_000462_1 "dEQP-GLES2.functional.shaders.preproce"
#define VkglTestCase_000462_2 "ssor.pragmas.pragma_macro_exp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000462, VkglTestCase_000462_1, VkglTestCase_000462_2);

#define VkglTestCase_000463_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000463_2 "r.pragmas.pragma_unrecognized_debug_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000463, VkglTestCase_000463_1, VkglTestCase_000463_2);

#define VkglTestCase_000464_1 "dEQP-GLES2.functional.shaders.preprocessor"
#define VkglTestCase_000464_2 ".pragmas.pragma_unrecognized_debug_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000464, VkglTestCase_000464_1, VkglTestCase_000464_2);

#define VkglTestCase_000465_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000465_2 "r.pragmas.pragma_unrecognized_token_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000465, VkglTestCase_000465_1, VkglTestCase_000465_2);

#define VkglTestCase_000466_1 "dEQP-GLES2.functional.shaders.preprocessor"
#define VkglTestCase_000466_2 ".pragmas.pragma_unrecognized_token_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000466, VkglTestCase_000466_1, VkglTestCase_000466_2);
