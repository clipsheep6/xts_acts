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

#define VkglTestCase_001148_1 "dEQP-GLES3.functional.shaders.pre"
#define VkglTestCase_001148_2 "processor.extensions.basic_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001148, VkglTestCase_001148_1, VkglTestCase_001148_2);

#define VkglTestCase_001149_1 "dEQP-GLES3.functional.shaders.prep"
#define VkglTestCase_001149_2 "rocessor.extensions.basic_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001149, VkglTestCase_001149_1, VkglTestCase_001149_2);

#define VkglTestCase_001150_1 "dEQP-GLES3.functional.shaders.prepr"
#define VkglTestCase_001150_2 "ocessor.extensions.macro_exp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001150, VkglTestCase_001150_1, VkglTestCase_001150_2);

#define VkglTestCase_001151_1 "dEQP-GLES3.functional.shaders.prepro"
#define VkglTestCase_001151_2 "cessor.extensions.macro_exp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001151, VkglTestCase_001151_1, VkglTestCase_001151_2);

#define VkglTestCase_001152_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_001152_2 "r.extensions.missing_extension_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001152, VkglTestCase_001152_1, VkglTestCase_001152_2);

#define VkglTestCase_001153_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_001153_2 ".extensions.missing_extension_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001153, VkglTestCase_001153_1, VkglTestCase_001153_2);

#define VkglTestCase_001154_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_001154_2 "r.extensions.invalid_extension_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001154, VkglTestCase_001154_1, VkglTestCase_001154_2);

#define VkglTestCase_001155_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_001155_2 ".extensions.invalid_extension_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001155, VkglTestCase_001155_1, VkglTestCase_001155_2);

#define VkglTestCase_001156_1 "dEQP-GLES3.functional.shaders.preproc"
#define VkglTestCase_001156_2 "essor.extensions.missing_colon_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001156, VkglTestCase_001156_1, VkglTestCase_001156_2);

#define VkglTestCase_001157_1 "dEQP-GLES3.functional.shaders.preproce"
#define VkglTestCase_001157_2 "ssor.extensions.missing_colon_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001157, VkglTestCase_001157_1, VkglTestCase_001157_2);

#define VkglTestCase_001158_1 "dEQP-GLES3.functional.shaders.preproc"
#define VkglTestCase_001158_2 "essor.extensions.expected_colon_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001158, VkglTestCase_001158_1, VkglTestCase_001158_2);

#define VkglTestCase_001159_1 "dEQP-GLES3.functional.shaders.preproce"
#define VkglTestCase_001159_2 "ssor.extensions.expected_colon_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001159, VkglTestCase_001159_1, VkglTestCase_001159_2);

#define VkglTestCase_001160_1 "dEQP-GLES3.functional.shaders.preproce"
#define VkglTestCase_001160_2 "ssor.extensions.missing_behavior_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001160, VkglTestCase_001160_1, VkglTestCase_001160_2);

#define VkglTestCase_001161_1 "dEQP-GLES3.functional.shaders.preproces"
#define VkglTestCase_001161_2 "sor.extensions.missing_behavior_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001161, VkglTestCase_001161_1, VkglTestCase_001161_2);

#define VkglTestCase_001162_1 "dEQP-GLES3.functional.shaders.preproces"
#define VkglTestCase_001162_2 "sor.extensions.invalid_behavior_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001162, VkglTestCase_001162_1, VkglTestCase_001162_2);

#define VkglTestCase_001163_1 "dEQP-GLES3.functional.shaders.preprocess"
#define VkglTestCase_001163_2 "or.extensions.invalid_behavior_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001163, VkglTestCase_001163_1, VkglTestCase_001163_2);

#define VkglTestCase_001164_1 "dEQP-GLES3.functional.shaders.preproces"
#define VkglTestCase_001164_2 "sor.extensions.invalid_behavior_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001164, VkglTestCase_001164_1, VkglTestCase_001164_2);

#define VkglTestCase_001165_1 "dEQP-GLES3.functional.shaders.preprocess"
#define VkglTestCase_001165_2 "or.extensions.invalid_behavior_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001165, VkglTestCase_001165_1, VkglTestCase_001165_2);

#define VkglTestCase_001166_1 "dEQP-GLES3.functional.shaders.preprocess"
#define VkglTestCase_001166_2 "or.extensions.invalid_char_in_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001166, VkglTestCase_001166_1, VkglTestCase_001166_2);

#define VkglTestCase_001167_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_001167_2 "r.extensions.invalid_char_in_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001167, VkglTestCase_001167_1, VkglTestCase_001167_2);

#define VkglTestCase_001168_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_001168_2 ".extensions.invalid_char_in_behavior_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001168, VkglTestCase_001168_1, VkglTestCase_001168_2);

#define VkglTestCase_001169_1 "dEQP-GLES3.functional.shaders.preprocessor."
#define VkglTestCase_001169_2 "extensions.invalid_char_in_behavior_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001169, VkglTestCase_001169_1, VkglTestCase_001169_2);

#define VkglTestCase_001170_1 "dEQP-GLES3.functional.shaders.preprocess"
#define VkglTestCase_001170_2 "or.extensions.unterminated_comment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001170, VkglTestCase_001170_1, VkglTestCase_001170_2);

#define VkglTestCase_001171_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_001171_2 "r.extensions.unterminated_comment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001171, VkglTestCase_001171_1, VkglTestCase_001171_2);

#define VkglTestCase_001172_1 "dEQP-GLES3.functional.shaders.preprocessor.ex"
#define VkglTestCase_001172_2 "tensions.after_non_preprocessing_tokens_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001172, VkglTestCase_001172_1, VkglTestCase_001172_2);

#define VkglTestCase_001173_1 "dEQP-GLES3.functional.shaders.preprocessor.ext"
#define VkglTestCase_001173_2 "ensions.after_non_preprocessing_tokens_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001173, VkglTestCase_001173_1, VkglTestCase_001173_2);
