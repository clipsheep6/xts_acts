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

#define VkglTestCase_005477_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.c"
#define VkglTestCase_005477_2 "omparisons.input_before_literal.greater.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005477, VkglTestCase_005477_1, VkglTestCase_005477_2);

#define VkglTestCase_005478_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.co"
#define VkglTestCase_005478_2 "mparisons.input_before_literal.greater.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005478, VkglTestCase_005478_1, VkglTestCase_005478_2);

#define VkglTestCase_005479_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.c"
#define VkglTestCase_005479_2 "omparisons.input_before_literal.greater.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005479, VkglTestCase_005479_1, VkglTestCase_005479_2);

#define VkglTestCase_005480_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.co"
#define VkglTestCase_005480_2 "mparisons.input_before_literal.greater.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005480, VkglTestCase_005480_1, VkglTestCase_005480_2);

#define VkglTestCase_005481_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.co"
#define VkglTestCase_005481_2 "mparisons.input_before_literal.greater.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005481, VkglTestCase_005481_1, VkglTestCase_005481_2);

#define VkglTestCase_005482_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.com"
#define VkglTestCase_005482_2 "parisons.input_before_literal.greater.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005482, VkglTestCase_005482_1, VkglTestCase_005482_2);

#define VkglTestCase_006511_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.c"
#define VkglTestCase_006511_2 "omparisons.input_before_literal.greater.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006511, VkglTestCase_006511_1, VkglTestCase_006511_2);

#define VkglTestCase_006512_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.co"
#define VkglTestCase_006512_2 "mparisons.input_before_literal.greater.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006512, VkglTestCase_006512_1, VkglTestCase_006512_2);

#define VkglTestCase_006513_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.c"
#define VkglTestCase_006513_2 "omparisons.input_before_literal.greater.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006513, VkglTestCase_006513_1, VkglTestCase_006513_2);

#define VkglTestCase_006514_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.co"
#define VkglTestCase_006514_2 "mparisons.input_before_literal.greater.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006514, VkglTestCase_006514_1, VkglTestCase_006514_2);

#define VkglTestCase_006515_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.co"
#define VkglTestCase_006515_2 "mparisons.input_before_literal.greater.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006515, VkglTestCase_006515_1, VkglTestCase_006515_2);

#define VkglTestCase_006516_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.com"
#define VkglTestCase_006516_2 "parisons.input_before_literal.greater.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006516, VkglTestCase_006516_1, VkglTestCase_006516_2);
