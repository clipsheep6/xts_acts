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

#define VkglTestCase_001100_1 "dEQP-GLES3.functional.shaders.preproc"
#define VkglTestCase_001100_2 "essor.directive.version_is_less_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001100, VkglTestCase_001100_1, VkglTestCase_001100_2);

#define VkglTestCase_001101_1 "dEQP-GLES3.functional.shaders.preproce"
#define VkglTestCase_001101_2 "ssor.directive.version_is_less_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001101, VkglTestCase_001101_1, VkglTestCase_001101_2);

#define VkglTestCase_001102_1 "dEQP-GLES3.functional.shaders.preproc"
#define VkglTestCase_001102_2 "essor.directive.version_is_more_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001102, VkglTestCase_001102_1, VkglTestCase_001102_2);

#define VkglTestCase_001103_1 "dEQP-GLES3.functional.shaders.preproce"
#define VkglTestCase_001103_2 "ssor.directive.version_is_more_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001103, VkglTestCase_001103_1, VkglTestCase_001103_2);

#define VkglTestCase_001104_1 "dEQP-GLES3.functional.shaders.preproces"
#define VkglTestCase_001104_2 "sor.directive.version_missing_es_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001104, VkglTestCase_001104_1, VkglTestCase_001104_2);

#define VkglTestCase_001105_1 "dEQP-GLES3.functional.shaders.preprocess"
#define VkglTestCase_001105_2 "or.directive.version_missing_es_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001105, VkglTestCase_001105_1, VkglTestCase_001105_2);

#define VkglTestCase_001106_1 "dEQP-GLES3.functional.shaders.preproc"
#define VkglTestCase_001106_2 "essor.directive.version_missing_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001106, VkglTestCase_001106_1, VkglTestCase_001106_2);

#define VkglTestCase_001107_1 "dEQP-GLES3.functional.shaders.preproce"
#define VkglTestCase_001107_2 "ssor.directive.version_missing_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001107, VkglTestCase_001107_1, VkglTestCase_001107_2);

#define VkglTestCase_001108_1 "dEQP-GLES3.functional.shaders.preprocessor.d"
#define VkglTestCase_001108_2 "irective.version_not_first_statement_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001108, VkglTestCase_001108_1, VkglTestCase_001108_2);

#define VkglTestCase_001109_1 "dEQP-GLES3.functional.shaders.preprocessor.di"
#define VkglTestCase_001109_2 "rective.version_not_first_statement_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001109, VkglTestCase_001109_1, VkglTestCase_001109_2);

#define VkglTestCase_001110_1 "dEQP-GLES3.functional.shaders.preprocessor.d"
#define VkglTestCase_001110_2 "irective.version_not_first_statement_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001110, VkglTestCase_001110_1, VkglTestCase_001110_2);

#define VkglTestCase_001111_1 "dEQP-GLES3.functional.shaders.preprocessor.di"
#define VkglTestCase_001111_2 "rective.version_not_first_statement_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001111, VkglTestCase_001111_1, VkglTestCase_001111_2);

#define VkglTestCase_001112_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_001112_2 "r.directive.version_invalid_token_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001112, VkglTestCase_001112_1, VkglTestCase_001112_2);

#define VkglTestCase_001113_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_001113_2 ".directive.version_invalid_token_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001113, VkglTestCase_001113_1, VkglTestCase_001113_2);

#define VkglTestCase_001114_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_001114_2 "r.directive.version_invalid_token_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001114, VkglTestCase_001114_1, VkglTestCase_001114_2);

#define VkglTestCase_001115_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_001115_2 ".directive.version_invalid_token_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001115, VkglTestCase_001115_1, VkglTestCase_001115_2);

#define VkglTestCase_001116_1 "dEQP-GLES3.functional.shaders.preproc"
#define VkglTestCase_001116_2 "essor.directive.invalid_version_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001116, VkglTestCase_001116_1, VkglTestCase_001116_2);

#define VkglTestCase_001117_1 "dEQP-GLES3.functional.shaders.preproce"
#define VkglTestCase_001117_2 "ssor.directive.invalid_version_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001117, VkglTestCase_001117_1, VkglTestCase_001117_2);

#define VkglTestCase_001118_1 "dEQP-GLES3.functional.shaders.preproce"
#define VkglTestCase_001118_2 "ssor.directive.additional_tokens_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001118, VkglTestCase_001118_1, VkglTestCase_001118_2);

#define VkglTestCase_001119_1 "dEQP-GLES3.functional.shaders.preproces"
#define VkglTestCase_001119_2 "sor.directive.additional_tokens_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001119, VkglTestCase_001119_1, VkglTestCase_001119_2);

#define VkglTestCase_001120_1 "dEQP-GLES3.functional.shaders.preprocess"
#define VkglTestCase_001120_2 "or.directive.error_with_no_tokens_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001120, VkglTestCase_001120_1, VkglTestCase_001120_2);

#define VkglTestCase_001121_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_001121_2 "r.directive.error_with_no_tokens_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001121, VkglTestCase_001121_1, VkglTestCase_001121_2);

#define VkglTestCase_001122_1 "dEQP-GLES3.functional.shaders.pr"
#define VkglTestCase_001122_2 "eprocessor.directive.error_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001122, VkglTestCase_001122_1, VkglTestCase_001122_2);

#define VkglTestCase_001123_1 "dEQP-GLES3.functional.shaders.pre"
#define VkglTestCase_001123_2 "processor.directive.error_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001123, VkglTestCase_001123_1, VkglTestCase_001123_2);
