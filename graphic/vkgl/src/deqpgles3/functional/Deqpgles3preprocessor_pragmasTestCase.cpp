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
#include "../ActsDeqpgles30002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001140_1 "dEQP-GLES3.functional.shaders.pr"
#define VkglTestCase_001140_2 "eprocessor.pragmas.pragma_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001140, VkglTestCase_001140_1, VkglTestCase_001140_2);

#define VkglTestCase_001141_1 "dEQP-GLES3.functional.shaders.pre"
#define VkglTestCase_001141_2 "processor.pragmas.pragma_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001141, VkglTestCase_001141_1, VkglTestCase_001141_2);

#define VkglTestCase_001142_1 "dEQP-GLES3.functional.shaders.preproc"
#define VkglTestCase_001142_2 "essor.pragmas.pragma_macro_exp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001142, VkglTestCase_001142_1, VkglTestCase_001142_2);

#define VkglTestCase_001143_1 "dEQP-GLES3.functional.shaders.preproce"
#define VkglTestCase_001143_2 "ssor.pragmas.pragma_macro_exp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001143, VkglTestCase_001143_1, VkglTestCase_001143_2);

#define VkglTestCase_001144_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_001144_2 "r.pragmas.pragma_unrecognized_debug_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001144, VkglTestCase_001144_1, VkglTestCase_001144_2);

#define VkglTestCase_001145_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_001145_2 ".pragmas.pragma_unrecognized_debug_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001145, VkglTestCase_001145_1, VkglTestCase_001145_2);

#define VkglTestCase_001146_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_001146_2 "r.pragmas.pragma_unrecognized_token_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001146, VkglTestCase_001146_1, VkglTestCase_001146_2);

#define VkglTestCase_001147_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_001147_2 ".pragmas.pragma_unrecognized_token_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001147, VkglTestCase_001147_1, VkglTestCase_001147_2);
