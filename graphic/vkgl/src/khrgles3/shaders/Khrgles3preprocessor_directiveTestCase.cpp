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
#include "../Khrgles3BaseFunc.h"
#include "../ActsKhrgles30002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001182_1 "KHR-GLES3.shaders.preprocessor."
#define VkglTestCase_001182_2 "directive.version_is_less_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001182, VkglTestCase_001182_1, VkglTestCase_001182_2);

#define VkglTestCase_001183_1 "KHR-GLES3.shaders.preprocessor.d"
#define VkglTestCase_001183_2 "irective.version_is_less_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001183, VkglTestCase_001183_1, VkglTestCase_001183_2);

#define VkglTestCase_001184_1 "KHR-GLES3.shaders.preprocessor."
#define VkglTestCase_001184_2 "directive.version_is_more_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001184, VkglTestCase_001184_1, VkglTestCase_001184_2);

#define VkglTestCase_001185_1 "KHR-GLES3.shaders.preprocessor.d"
#define VkglTestCase_001185_2 "irective.version_is_more_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001185, VkglTestCase_001185_1, VkglTestCase_001185_2);

#define VkglTestCase_001186_1 "KHR-GLES3.shaders.preprocessor.di"
#define VkglTestCase_001186_2 "rective.version_missing_es_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001186, VkglTestCase_001186_1, VkglTestCase_001186_2);

#define VkglTestCase_001187_1 "KHR-GLES3.shaders.preprocessor.dir"
#define VkglTestCase_001187_2 "ective.version_missing_es_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001187, VkglTestCase_001187_1, VkglTestCase_001187_2);

#define VkglTestCase_001188_1 "KHR-GLES3.shaders.preprocessor."
#define VkglTestCase_001188_2 "directive.version_missing_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001188, VkglTestCase_001188_1, VkglTestCase_001188_2);

#define VkglTestCase_001189_1 "KHR-GLES3.shaders.preprocessor.d"
#define VkglTestCase_001189_2 "irective.version_missing_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001189, VkglTestCase_001189_1, VkglTestCase_001189_2);

#define VkglTestCase_001190_1 "KHR-GLES3.shaders.preprocessor.directi"
#define VkglTestCase_001190_2 "ve.version_not_first_statement_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001190, VkglTestCase_001190_1, VkglTestCase_001190_2);

#define VkglTestCase_001191_1 "KHR-GLES3.shaders.preprocessor.directiv"
#define VkglTestCase_001191_2 "e.version_not_first_statement_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001191, VkglTestCase_001191_1, VkglTestCase_001191_2);

#define VkglTestCase_001192_1 "KHR-GLES3.shaders.preprocessor.directi"
#define VkglTestCase_001192_2 "ve.version_not_first_statement_2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001192, VkglTestCase_001192_1, VkglTestCase_001192_2);

#define VkglTestCase_001193_1 "KHR-GLES3.shaders.preprocessor.directiv"
#define VkglTestCase_001193_2 "e.version_not_first_statement_2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001193, VkglTestCase_001193_1, VkglTestCase_001193_2);

#define VkglTestCase_001194_1 "KHR-GLES3.shaders.preprocessor.dire"
#define VkglTestCase_001194_2 "ctive.version_invalid_token_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001194, VkglTestCase_001194_1, VkglTestCase_001194_2);

#define VkglTestCase_001195_1 "KHR-GLES3.shaders.preprocessor.direc"
#define VkglTestCase_001195_2 "tive.version_invalid_token_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001195, VkglTestCase_001195_1, VkglTestCase_001195_2);

#define VkglTestCase_001196_1 "KHR-GLES3.shaders.preprocessor.dire"
#define VkglTestCase_001196_2 "ctive.version_invalid_token_2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001196, VkglTestCase_001196_1, VkglTestCase_001196_2);

#define VkglTestCase_001197_1 "KHR-GLES3.shaders.preprocessor.direc"
#define VkglTestCase_001197_2 "tive.version_invalid_token_2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001197, VkglTestCase_001197_1, VkglTestCase_001197_2);

#define VkglTestCase_001198_1 "KHR-GLES3.shaders.preprocessor."
#define VkglTestCase_001198_2 "directive.invalid_version_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001198, VkglTestCase_001198_1, VkglTestCase_001198_2);

#define VkglTestCase_001199_1 "KHR-GLES3.shaders.preprocessor.d"
#define VkglTestCase_001199_2 "irective.invalid_version_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001199, VkglTestCase_001199_1, VkglTestCase_001199_2);

#define VkglTestCase_001200_1 "KHR-GLES3.shaders.preprocessor.d"
#define VkglTestCase_001200_2 "irective.additional_tokens_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001200, VkglTestCase_001200_1, VkglTestCase_001200_2);

#define VkglTestCase_001201_1 "KHR-GLES3.shaders.preprocessor.di"
#define VkglTestCase_001201_2 "rective.additional_tokens_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001201, VkglTestCase_001201_1, VkglTestCase_001201_2);

#define VkglTestCase_001202_1 "KHR-GLES3.shaders.preprocessor.dir"
#define VkglTestCase_001202_2 "ective.error_with_no_tokens_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001202, VkglTestCase_001202_1, VkglTestCase_001202_2);

#define VkglTestCase_001203_1 "KHR-GLES3.shaders.preprocessor.dire"
#define VkglTestCase_001203_2 "ctive.error_with_no_tokens_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001203, VkglTestCase_001203_1, VkglTestCase_001203_2);

#define VkglTestCase_001204_1 "KHR-GLES3.shaders.preproce"
#define VkglTestCase_001204_2 "ssor.directive.error_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001204, VkglTestCase_001204_1, VkglTestCase_001204_2);

#define VkglTestCase_001205_1 "KHR-GLES3.shaders.preproces"
#define VkglTestCase_001205_2 "sor.directive.error_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001205, VkglTestCase_001205_1, VkglTestCase_001205_2);
