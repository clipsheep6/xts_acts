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

#define VkglTestCase_000399_1 "dEQP-GLES2.functional.shaders.preprocessor.c"
#define VkglTestCase_000399_2 "onditionals.unterminated_nested_blocks_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000399, VkglTestCase_000399_1, VkglTestCase_000399_2);

#define VkglTestCase_000400_1 "dEQP-GLES2.functional.shaders.preprocessor.co"
#define VkglTestCase_000400_2 "nditionals.unterminated_nested_blocks_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000400, VkglTestCase_000400_1, VkglTestCase_000400_2);

#define VkglTestCase_000401_1 "dEQP-GLES2.functional.shaders.prepr"
#define VkglTestCase_000401_2 "ocessor.conditionals.ifdef_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000401, VkglTestCase_000401_1, VkglTestCase_000401_2);

#define VkglTestCase_000402_1 "dEQP-GLES2.functional.shaders.prepro"
#define VkglTestCase_000402_2 "cessor.conditionals.ifdef_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000402, VkglTestCase_000402_1, VkglTestCase_000402_2);

#define VkglTestCase_000403_1 "dEQP-GLES2.functional.shaders.prepr"
#define VkglTestCase_000403_2 "ocessor.conditionals.ifdef_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000403, VkglTestCase_000403_1, VkglTestCase_000403_2);

#define VkglTestCase_000404_1 "dEQP-GLES2.functional.shaders.prepro"
#define VkglTestCase_000404_2 "cessor.conditionals.ifdef_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000404, VkglTestCase_000404_1, VkglTestCase_000404_2);

#define VkglTestCase_000405_1 "dEQP-GLES2.functional.shaders.prepr"
#define VkglTestCase_000405_2 "ocessor.conditionals.ifdef_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000405, VkglTestCase_000405_1, VkglTestCase_000405_2);

#define VkglTestCase_000406_1 "dEQP-GLES2.functional.shaders.prepro"
#define VkglTestCase_000406_2 "cessor.conditionals.ifdef_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000406, VkglTestCase_000406_1, VkglTestCase_000406_2);

#define VkglTestCase_000407_1 "dEQP-GLES2.functional.shaders.preproce"
#define VkglTestCase_000407_2 "ssor.conditionals.invalid_ifdef_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000407, VkglTestCase_000407_1, VkglTestCase_000407_2);

#define VkglTestCase_000408_1 "dEQP-GLES2.functional.shaders.preproces"
#define VkglTestCase_000408_2 "sor.conditionals.invalid_ifdef_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000408, VkglTestCase_000408_1, VkglTestCase_000408_2);

#define VkglTestCase_000409_1 "dEQP-GLES2.functional.shaders.prepr"
#define VkglTestCase_000409_2 "ocessor.conditionals.ifndef_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000409, VkglTestCase_000409_1, VkglTestCase_000409_2);

#define VkglTestCase_000410_1 "dEQP-GLES2.functional.shaders.prepro"
#define VkglTestCase_000410_2 "cessor.conditionals.ifndef_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000410, VkglTestCase_000410_1, VkglTestCase_000410_2);

#define VkglTestCase_000411_1 "dEQP-GLES2.functional.shaders.prepr"
#define VkglTestCase_000411_2 "ocessor.conditionals.ifndef_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000411, VkglTestCase_000411_1, VkglTestCase_000411_2);

#define VkglTestCase_000412_1 "dEQP-GLES2.functional.shaders.prepro"
#define VkglTestCase_000412_2 "cessor.conditionals.ifndef_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000412, VkglTestCase_000412_1, VkglTestCase_000412_2);

#define VkglTestCase_000413_1 "dEQP-GLES2.functional.shaders.preproce"
#define VkglTestCase_000413_2 "ssor.conditionals.invalid_ifndef_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000413, VkglTestCase_000413_1, VkglTestCase_000413_2);

#define VkglTestCase_000414_1 "dEQP-GLES2.functional.shaders.preproces"
#define VkglTestCase_000414_2 "sor.conditionals.invalid_ifndef_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000414, VkglTestCase_000414_1, VkglTestCase_000414_2);

#define VkglTestCase_000415_1 "dEQP-GLES2.functional.shaders.preprocessor.co"
#define VkglTestCase_000415_2 "nditionals.mixed_conditional_inclusion_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000415, VkglTestCase_000415_1, VkglTestCase_000415_2);

#define VkglTestCase_000416_1 "dEQP-GLES2.functional.shaders.preprocessor.con"
#define VkglTestCase_000416_2 "ditionals.mixed_conditional_inclusion_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000416, VkglTestCase_000416_1, VkglTestCase_000416_2);

#define VkglTestCase_000417_1 "dEQP-GLES2.functional.shaders.preproc"
#define VkglTestCase_000417_2 "essor.conditionals.nested_if_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000417, VkglTestCase_000417_1, VkglTestCase_000417_2);

#define VkglTestCase_000418_1 "dEQP-GLES2.functional.shaders.preproce"
#define VkglTestCase_000418_2 "ssor.conditionals.nested_if_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000418, VkglTestCase_000418_1, VkglTestCase_000418_2);

#define VkglTestCase_000419_1 "dEQP-GLES2.functional.shaders.preproc"
#define VkglTestCase_000419_2 "essor.conditionals.nested_if_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000419, VkglTestCase_000419_1, VkglTestCase_000419_2);

#define VkglTestCase_000420_1 "dEQP-GLES2.functional.shaders.preproce"
#define VkglTestCase_000420_2 "ssor.conditionals.nested_if_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000420, VkglTestCase_000420_1, VkglTestCase_000420_2);

#define VkglTestCase_000421_1 "dEQP-GLES2.functional.shaders.preproc"
#define VkglTestCase_000421_2 "essor.conditionals.nested_if_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000421, VkglTestCase_000421_1, VkglTestCase_000421_2);

#define VkglTestCase_000422_1 "dEQP-GLES2.functional.shaders.preproce"
#define VkglTestCase_000422_2 "ssor.conditionals.nested_if_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000422, VkglTestCase_000422_1, VkglTestCase_000422_2);
