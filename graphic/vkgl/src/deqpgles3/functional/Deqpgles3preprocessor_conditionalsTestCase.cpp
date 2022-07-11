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

#define VkglTestCase_001082_1 "dEQP-GLES3.functional.shaders.prepr"
#define VkglTestCase_001082_2 "ocessor.conditionals.ifdef_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001082, VkglTestCase_001082_1, VkglTestCase_001082_2);

#define VkglTestCase_001083_1 "dEQP-GLES3.functional.shaders.prepro"
#define VkglTestCase_001083_2 "cessor.conditionals.ifdef_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001083, VkglTestCase_001083_1, VkglTestCase_001083_2);

#define VkglTestCase_001084_1 "dEQP-GLES3.functional.shaders.prepr"
#define VkglTestCase_001084_2 "ocessor.conditionals.ifdef_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001084, VkglTestCase_001084_1, VkglTestCase_001084_2);

#define VkglTestCase_001085_1 "dEQP-GLES3.functional.shaders.prepro"
#define VkglTestCase_001085_2 "cessor.conditionals.ifdef_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001085, VkglTestCase_001085_1, VkglTestCase_001085_2);

#define VkglTestCase_001086_1 "dEQP-GLES3.functional.shaders.prepr"
#define VkglTestCase_001086_2 "ocessor.conditionals.ifdef_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001086, VkglTestCase_001086_1, VkglTestCase_001086_2);

#define VkglTestCase_001087_1 "dEQP-GLES3.functional.shaders.prepro"
#define VkglTestCase_001087_2 "cessor.conditionals.ifdef_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001087, VkglTestCase_001087_1, VkglTestCase_001087_2);

#define VkglTestCase_001088_1 "dEQP-GLES3.functional.shaders.prepr"
#define VkglTestCase_001088_2 "ocessor.conditionals.ifndef_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001088, VkglTestCase_001088_1, VkglTestCase_001088_2);

#define VkglTestCase_001089_1 "dEQP-GLES3.functional.shaders.prepro"
#define VkglTestCase_001089_2 "cessor.conditionals.ifndef_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001089, VkglTestCase_001089_1, VkglTestCase_001089_2);

#define VkglTestCase_001090_1 "dEQP-GLES3.functional.shaders.prepr"
#define VkglTestCase_001090_2 "ocessor.conditionals.ifndef_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001090, VkglTestCase_001090_1, VkglTestCase_001090_2);

#define VkglTestCase_001091_1 "dEQP-GLES3.functional.shaders.prepro"
#define VkglTestCase_001091_2 "cessor.conditionals.ifndef_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001091, VkglTestCase_001091_1, VkglTestCase_001091_2);

#define VkglTestCase_001092_1 "dEQP-GLES3.functional.shaders.preprocessor.co"
#define VkglTestCase_001092_2 "nditionals.mixed_conditional_inclusion_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001092, VkglTestCase_001092_1, VkglTestCase_001092_2);

#define VkglTestCase_001093_1 "dEQP-GLES3.functional.shaders.preprocessor.con"
#define VkglTestCase_001093_2 "ditionals.mixed_conditional_inclusion_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001093, VkglTestCase_001093_1, VkglTestCase_001093_2);

#define VkglTestCase_001094_1 "dEQP-GLES3.functional.shaders.preproc"
#define VkglTestCase_001094_2 "essor.conditionals.nested_if_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001094, VkglTestCase_001094_1, VkglTestCase_001094_2);

#define VkglTestCase_001095_1 "dEQP-GLES3.functional.shaders.preproce"
#define VkglTestCase_001095_2 "ssor.conditionals.nested_if_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001095, VkglTestCase_001095_1, VkglTestCase_001095_2);

#define VkglTestCase_001096_1 "dEQP-GLES3.functional.shaders.preproc"
#define VkglTestCase_001096_2 "essor.conditionals.nested_if_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001096, VkglTestCase_001096_1, VkglTestCase_001096_2);

#define VkglTestCase_001097_1 "dEQP-GLES3.functional.shaders.preproce"
#define VkglTestCase_001097_2 "ssor.conditionals.nested_if_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001097, VkglTestCase_001097_1, VkglTestCase_001097_2);

#define VkglTestCase_001098_1 "dEQP-GLES3.functional.shaders.preproc"
#define VkglTestCase_001098_2 "essor.conditionals.nested_if_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001098, VkglTestCase_001098_1, VkglTestCase_001098_2);

#define VkglTestCase_001099_1 "dEQP-GLES3.functional.shaders.preproce"
#define VkglTestCase_001099_2 "ssor.conditionals.nested_if_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001099, VkglTestCase_001099_1, VkglTestCase_001099_2);
