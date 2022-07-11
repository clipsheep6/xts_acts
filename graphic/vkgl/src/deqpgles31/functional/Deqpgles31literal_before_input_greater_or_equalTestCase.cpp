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

#define VkglTestCase_005561_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.compar"
#define VkglTestCase_005561_2 "isons.literal_before_input.greater_or_equal.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005561, VkglTestCase_005561_1, VkglTestCase_005561_2);

#define VkglTestCase_005562_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.compari"
#define VkglTestCase_005562_2 "sons.literal_before_input.greater_or_equal.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005562, VkglTestCase_005562_1, VkglTestCase_005562_2);

#define VkglTestCase_005563_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.compa"
#define VkglTestCase_005563_2 "risons.literal_before_input.greater_or_equal.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005563, VkglTestCase_005563_1, VkglTestCase_005563_2);

#define VkglTestCase_005564_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.compar"
#define VkglTestCase_005564_2 "isons.literal_before_input.greater_or_equal.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005564, VkglTestCase_005564_1, VkglTestCase_005564_2);

#define VkglTestCase_005565_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.compar"
#define VkglTestCase_005565_2 "isons.literal_before_input.greater_or_equal.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005565, VkglTestCase_005565_1, VkglTestCase_005565_2);

#define VkglTestCase_005566_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.compari"
#define VkglTestCase_005566_2 "sons.literal_before_input.greater_or_equal.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005566, VkglTestCase_005566_1, VkglTestCase_005566_2);

#define VkglTestCase_006595_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.compar"
#define VkglTestCase_006595_2 "isons.literal_before_input.greater_or_equal.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006595, VkglTestCase_006595_1, VkglTestCase_006595_2);

#define VkglTestCase_006596_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.compari"
#define VkglTestCase_006596_2 "sons.literal_before_input.greater_or_equal.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006596, VkglTestCase_006596_1, VkglTestCase_006596_2);

#define VkglTestCase_006597_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.compa"
#define VkglTestCase_006597_2 "risons.literal_before_input.greater_or_equal.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006597, VkglTestCase_006597_1, VkglTestCase_006597_2);

#define VkglTestCase_006598_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.compar"
#define VkglTestCase_006598_2 "isons.literal_before_input.greater_or_equal.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006598, VkglTestCase_006598_1, VkglTestCase_006598_2);

#define VkglTestCase_006599_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.compar"
#define VkglTestCase_006599_2 "isons.literal_before_input.greater_or_equal.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006599, VkglTestCase_006599_1, VkglTestCase_006599_2);

#define VkglTestCase_006600_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.compari"
#define VkglTestCase_006600_2 "sons.literal_before_input.greater_or_equal.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006600, VkglTestCase_006600_1, VkglTestCase_006600_2);
