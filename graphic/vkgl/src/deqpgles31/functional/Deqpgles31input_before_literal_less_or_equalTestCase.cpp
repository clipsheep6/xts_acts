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

#define VkglTestCase_005483_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.comp"
#define VkglTestCase_005483_2 "arisons.input_before_literal.less_or_equal.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005483, VkglTestCase_005483_1, VkglTestCase_005483_2);

#define VkglTestCase_005484_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.compa"
#define VkglTestCase_005484_2 "risons.input_before_literal.less_or_equal.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005484, VkglTestCase_005484_1, VkglTestCase_005484_2);

#define VkglTestCase_005485_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.comp"
#define VkglTestCase_005485_2 "arisons.input_before_literal.less_or_equal.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005485, VkglTestCase_005485_1, VkglTestCase_005485_2);

#define VkglTestCase_005486_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.compa"
#define VkglTestCase_005486_2 "risons.input_before_literal.less_or_equal.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005486, VkglTestCase_005486_1, VkglTestCase_005486_2);

#define VkglTestCase_005487_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.compa"
#define VkglTestCase_005487_2 "risons.input_before_literal.less_or_equal.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005487, VkglTestCase_005487_1, VkglTestCase_005487_2);

#define VkglTestCase_005488_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.compar"
#define VkglTestCase_005488_2 "isons.input_before_literal.less_or_equal.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005488, VkglTestCase_005488_1, VkglTestCase_005488_2);

#define VkglTestCase_006517_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.comp"
#define VkglTestCase_006517_2 "arisons.input_before_literal.less_or_equal.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006517, VkglTestCase_006517_1, VkglTestCase_006517_2);

#define VkglTestCase_006518_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.compa"
#define VkglTestCase_006518_2 "risons.input_before_literal.less_or_equal.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006518, VkglTestCase_006518_1, VkglTestCase_006518_2);

#define VkglTestCase_006519_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.comp"
#define VkglTestCase_006519_2 "arisons.input_before_literal.less_or_equal.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006519, VkglTestCase_006519_1, VkglTestCase_006519_2);

#define VkglTestCase_006520_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.compa"
#define VkglTestCase_006520_2 "risons.input_before_literal.less_or_equal.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006520, VkglTestCase_006520_1, VkglTestCase_006520_2);

#define VkglTestCase_006521_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.compa"
#define VkglTestCase_006521_2 "risons.input_before_literal.less_or_equal.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006521, VkglTestCase_006521_1, VkglTestCase_006521_2);

#define VkglTestCase_006522_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.compar"
#define VkglTestCase_006522_2 "isons.input_before_literal.less_or_equal.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006522, VkglTestCase_006522_1, VkglTestCase_006522_2);
