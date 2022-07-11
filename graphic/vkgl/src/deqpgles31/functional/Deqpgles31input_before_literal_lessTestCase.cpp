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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310006TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_005471_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005471_2 "comparisons.input_before_literal.less.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005471, VkglTestCase_005471_1, VkglTestCase_005471_2);

#define VkglTestCase_005472_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.c"
#define VkglTestCase_005472_2 "omparisons.input_before_literal.less.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005472, VkglTestCase_005472_1, VkglTestCase_005472_2);

#define VkglTestCase_005473_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005473_2 ".comparisons.input_before_literal.less.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005473, VkglTestCase_005473_1, VkglTestCase_005473_2);

#define VkglTestCase_005474_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005474_2 "comparisons.input_before_literal.less.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005474, VkglTestCase_005474_1, VkglTestCase_005474_2);

#define VkglTestCase_005475_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005475_2 "comparisons.input_before_literal.less.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005475, VkglTestCase_005475_1, VkglTestCase_005475_2);

#define VkglTestCase_005476_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.c"
#define VkglTestCase_005476_2 "omparisons.input_before_literal.less.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005476, VkglTestCase_005476_1, VkglTestCase_005476_2);

#define VkglTestCase_006505_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006505_2 "comparisons.input_before_literal.less.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006505, VkglTestCase_006505_1, VkglTestCase_006505_2);

#define VkglTestCase_006506_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.c"
#define VkglTestCase_006506_2 "omparisons.input_before_literal.less.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006506, VkglTestCase_006506_1, VkglTestCase_006506_2);

#define VkglTestCase_006507_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006507_2 ".comparisons.input_before_literal.less.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006507, VkglTestCase_006507_1, VkglTestCase_006507_2);

#define VkglTestCase_006508_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006508_2 "comparisons.input_before_literal.less.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006508, VkglTestCase_006508_1, VkglTestCase_006508_2);

#define VkglTestCase_006509_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006509_2 "comparisons.input_before_literal.less.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006509, VkglTestCase_006509_1, VkglTestCase_006509_2);

#define VkglTestCase_006510_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.c"
#define VkglTestCase_006510_2 "omparisons.input_before_literal.less.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006510, VkglTestCase_006510_1, VkglTestCase_006510_2);
