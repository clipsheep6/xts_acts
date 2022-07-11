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

#define VkglTestCase_000423_1 "dEQP-GLES2.functional.shaders.pre"
#define VkglTestCase_000423_2 "processor.directive.version_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000423, VkglTestCase_000423_1, VkglTestCase_000423_2);

#define VkglTestCase_000424_1 "dEQP-GLES2.functional.shaders.prep"
#define VkglTestCase_000424_2 "rocessor.directive.version_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000424, VkglTestCase_000424_1, VkglTestCase_000424_2);

#define VkglTestCase_000425_1 "dEQP-GLES2.functional.shaders.preproc"
#define VkglTestCase_000425_2 "essor.directive.version_is_less_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000425, VkglTestCase_000425_1, VkglTestCase_000425_2);

#define VkglTestCase_000426_1 "dEQP-GLES2.functional.shaders.preproce"
#define VkglTestCase_000426_2 "ssor.directive.version_is_less_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000426, VkglTestCase_000426_1, VkglTestCase_000426_2);

#define VkglTestCase_000427_1 "dEQP-GLES2.functional.shaders.preproc"
#define VkglTestCase_000427_2 "essor.directive.version_is_more_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000427, VkglTestCase_000427_1, VkglTestCase_000427_2);

#define VkglTestCase_000428_1 "dEQP-GLES2.functional.shaders.preproce"
#define VkglTestCase_000428_2 "ssor.directive.version_is_more_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000428, VkglTestCase_000428_1, VkglTestCase_000428_2);

#define VkglTestCase_000429_1 "dEQP-GLES2.functional.shaders.preproc"
#define VkglTestCase_000429_2 "essor.directive.version_missing_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000429, VkglTestCase_000429_1, VkglTestCase_000429_2);

#define VkglTestCase_000430_1 "dEQP-GLES2.functional.shaders.preproce"
#define VkglTestCase_000430_2 "ssor.directive.version_missing_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000430, VkglTestCase_000430_1, VkglTestCase_000430_2);

#define VkglTestCase_000431_1 "dEQP-GLES2.functional.shaders.preprocessor.d"
#define VkglTestCase_000431_2 "irective.version_not_first_statement_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000431, VkglTestCase_000431_1, VkglTestCase_000431_2);

#define VkglTestCase_000432_1 "dEQP-GLES2.functional.shaders.preprocessor.di"
#define VkglTestCase_000432_2 "rective.version_not_first_statement_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000432, VkglTestCase_000432_1, VkglTestCase_000432_2);

#define VkglTestCase_000433_1 "dEQP-GLES2.functional.shaders.preprocessor.d"
#define VkglTestCase_000433_2 "irective.version_not_first_statement_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000433, VkglTestCase_000433_1, VkglTestCase_000433_2);

#define VkglTestCase_000434_1 "dEQP-GLES2.functional.shaders.preprocessor.di"
#define VkglTestCase_000434_2 "rective.version_not_first_statement_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000434, VkglTestCase_000434_1, VkglTestCase_000434_2);

#define VkglTestCase_000435_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000435_2 "r.directive.version_invalid_token_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000435, VkglTestCase_000435_1, VkglTestCase_000435_2);

#define VkglTestCase_000436_1 "dEQP-GLES2.functional.shaders.preprocessor"
#define VkglTestCase_000436_2 ".directive.version_invalid_token_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000436, VkglTestCase_000436_1, VkglTestCase_000436_2);

#define VkglTestCase_000437_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000437_2 "r.directive.version_invalid_token_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000437, VkglTestCase_000437_1, VkglTestCase_000437_2);

#define VkglTestCase_000438_1 "dEQP-GLES2.functional.shaders.preprocessor"
#define VkglTestCase_000438_2 ".directive.version_invalid_token_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000438, VkglTestCase_000438_1, VkglTestCase_000438_2);

#define VkglTestCase_000439_1 "dEQP-GLES2.functional.shaders.preproc"
#define VkglTestCase_000439_2 "essor.directive.invalid_version_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000439, VkglTestCase_000439_1, VkglTestCase_000439_2);

#define VkglTestCase_000440_1 "dEQP-GLES2.functional.shaders.preproce"
#define VkglTestCase_000440_2 "ssor.directive.invalid_version_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000440, VkglTestCase_000440_1, VkglTestCase_000440_2);

#define VkglTestCase_000441_1 "dEQP-GLES2.functional.shaders.preproce"
#define VkglTestCase_000441_2 "ssor.directive.additional_tokens_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000441, VkglTestCase_000441_1, VkglTestCase_000441_2);

#define VkglTestCase_000442_1 "dEQP-GLES2.functional.shaders.preproces"
#define VkglTestCase_000442_2 "sor.directive.additional_tokens_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000442, VkglTestCase_000442_1, VkglTestCase_000442_2);

#define VkglTestCase_000443_1 "dEQP-GLES2.functional.shaders.preprocess"
#define VkglTestCase_000443_2 "or.directive.error_with_no_tokens_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000443, VkglTestCase_000443_1, VkglTestCase_000443_2);

#define VkglTestCase_000444_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000444_2 "r.directive.error_with_no_tokens_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000444, VkglTestCase_000444_1, VkglTestCase_000444_2);

#define VkglTestCase_000445_1 "dEQP-GLES2.functional.shaders.pr"
#define VkglTestCase_000445_2 "eprocessor.directive.error_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000445, VkglTestCase_000445_1, VkglTestCase_000445_2);

#define VkglTestCase_000446_1 "dEQP-GLES2.functional.shaders.pre"
#define VkglTestCase_000446_2 "processor.directive.error_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000446, VkglTestCase_000446_1, VkglTestCase_000446_2);
