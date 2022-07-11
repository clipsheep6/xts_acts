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

#define VkglTestCase_005549_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.c"
#define VkglTestCase_005549_2 "omparisons.literal_before_input.greater.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005549, VkglTestCase_005549_1, VkglTestCase_005549_2);

#define VkglTestCase_005550_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.co"
#define VkglTestCase_005550_2 "mparisons.literal_before_input.greater.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005550, VkglTestCase_005550_1, VkglTestCase_005550_2);

#define VkglTestCase_005551_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.c"
#define VkglTestCase_005551_2 "omparisons.literal_before_input.greater.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005551, VkglTestCase_005551_1, VkglTestCase_005551_2);

#define VkglTestCase_005552_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.co"
#define VkglTestCase_005552_2 "mparisons.literal_before_input.greater.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005552, VkglTestCase_005552_1, VkglTestCase_005552_2);

#define VkglTestCase_005553_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.co"
#define VkglTestCase_005553_2 "mparisons.literal_before_input.greater.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005553, VkglTestCase_005553_1, VkglTestCase_005553_2);

#define VkglTestCase_005554_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.com"
#define VkglTestCase_005554_2 "parisons.literal_before_input.greater.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005554, VkglTestCase_005554_1, VkglTestCase_005554_2);

#define VkglTestCase_006583_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.c"
#define VkglTestCase_006583_2 "omparisons.literal_before_input.greater.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006583, VkglTestCase_006583_1, VkglTestCase_006583_2);

#define VkglTestCase_006584_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.co"
#define VkglTestCase_006584_2 "mparisons.literal_before_input.greater.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006584, VkglTestCase_006584_1, VkglTestCase_006584_2);

#define VkglTestCase_006585_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.c"
#define VkglTestCase_006585_2 "omparisons.literal_before_input.greater.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006585, VkglTestCase_006585_1, VkglTestCase_006585_2);

#define VkglTestCase_006586_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.co"
#define VkglTestCase_006586_2 "mparisons.literal_before_input.greater.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006586, VkglTestCase_006586_1, VkglTestCase_006586_2);

#define VkglTestCase_006587_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.co"
#define VkglTestCase_006587_2 "mparisons.literal_before_input.greater.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006587, VkglTestCase_006587_1, VkglTestCase_006587_2);

#define VkglTestCase_006588_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.com"
#define VkglTestCase_006588_2 "parisons.literal_before_input.greater.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006588, VkglTestCase_006588_1, VkglTestCase_006588_2);
