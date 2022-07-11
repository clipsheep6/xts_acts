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

#define VkglTestCase_005543_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005543_2 "comparisons.literal_before_input.less.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005543, VkglTestCase_005543_1, VkglTestCase_005543_2);

#define VkglTestCase_005544_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.c"
#define VkglTestCase_005544_2 "omparisons.literal_before_input.less.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005544, VkglTestCase_005544_1, VkglTestCase_005544_2);

#define VkglTestCase_005545_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005545_2 ".comparisons.literal_before_input.less.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005545, VkglTestCase_005545_1, VkglTestCase_005545_2);

#define VkglTestCase_005546_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005546_2 "comparisons.literal_before_input.less.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005546, VkglTestCase_005546_1, VkglTestCase_005546_2);

#define VkglTestCase_005547_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005547_2 "comparisons.literal_before_input.less.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005547, VkglTestCase_005547_1, VkglTestCase_005547_2);

#define VkglTestCase_005548_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.c"
#define VkglTestCase_005548_2 "omparisons.literal_before_input.less.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005548, VkglTestCase_005548_1, VkglTestCase_005548_2);

#define VkglTestCase_006577_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006577_2 "comparisons.literal_before_input.less.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006577, VkglTestCase_006577_1, VkglTestCase_006577_2);

#define VkglTestCase_006578_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.c"
#define VkglTestCase_006578_2 "omparisons.literal_before_input.less.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006578, VkglTestCase_006578_1, VkglTestCase_006578_2);

#define VkglTestCase_006579_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006579_2 ".comparisons.literal_before_input.less.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006579, VkglTestCase_006579_1, VkglTestCase_006579_2);

#define VkglTestCase_006580_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006580_2 "comparisons.literal_before_input.less.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006580, VkglTestCase_006580_1, VkglTestCase_006580_2);

#define VkglTestCase_006581_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006581_2 "comparisons.literal_before_input.less.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006581, VkglTestCase_006581_1, VkglTestCase_006581_2);

#define VkglTestCase_006582_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.c"
#define VkglTestCase_006582_2 "omparisons.literal_before_input.less.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006582, VkglTestCase_006582_1, VkglTestCase_006582_2);
