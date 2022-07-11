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

#define VkglTestCase_005555_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.comp"
#define VkglTestCase_005555_2 "arisons.literal_before_input.less_or_equal.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005555, VkglTestCase_005555_1, VkglTestCase_005555_2);

#define VkglTestCase_005556_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.compa"
#define VkglTestCase_005556_2 "risons.literal_before_input.less_or_equal.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005556, VkglTestCase_005556_1, VkglTestCase_005556_2);

#define VkglTestCase_005557_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.comp"
#define VkglTestCase_005557_2 "arisons.literal_before_input.less_or_equal.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005557, VkglTestCase_005557_1, VkglTestCase_005557_2);

#define VkglTestCase_005558_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.compa"
#define VkglTestCase_005558_2 "risons.literal_before_input.less_or_equal.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005558, VkglTestCase_005558_1, VkglTestCase_005558_2);

#define VkglTestCase_005559_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.compa"
#define VkglTestCase_005559_2 "risons.literal_before_input.less_or_equal.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005559, VkglTestCase_005559_1, VkglTestCase_005559_2);

#define VkglTestCase_005560_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.compar"
#define VkglTestCase_005560_2 "isons.literal_before_input.less_or_equal.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005560, VkglTestCase_005560_1, VkglTestCase_005560_2);

#define VkglTestCase_006589_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.comp"
#define VkglTestCase_006589_2 "arisons.literal_before_input.less_or_equal.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006589, VkglTestCase_006589_1, VkglTestCase_006589_2);

#define VkglTestCase_006590_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.compa"
#define VkglTestCase_006590_2 "risons.literal_before_input.less_or_equal.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006590, VkglTestCase_006590_1, VkglTestCase_006590_2);

#define VkglTestCase_006591_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.comp"
#define VkglTestCase_006591_2 "arisons.literal_before_input.less_or_equal.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006591, VkglTestCase_006591_1, VkglTestCase_006591_2);

#define VkglTestCase_006592_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.compa"
#define VkglTestCase_006592_2 "risons.literal_before_input.less_or_equal.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006592, VkglTestCase_006592_1, VkglTestCase_006592_2);

#define VkglTestCase_006593_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.compa"
#define VkglTestCase_006593_2 "risons.literal_before_input.less_or_equal.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006593, VkglTestCase_006593_1, VkglTestCase_006593_2);

#define VkglTestCase_006594_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.compar"
#define VkglTestCase_006594_2 "isons.literal_before_input.less_or_equal.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006594, VkglTestCase_006594_1, VkglTestCase_006594_2);
