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
#include "../ActsDeqpgles30012TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_011930_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_011930_2 "ry_operator.less_or_equal.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011930, VkglTestCase_011930_1, VkglTestCase_011930_2);

#define VkglTestCase_011931_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_011931_2 "y_operator.less_or_equal.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011931, VkglTestCase_011931_1, VkglTestCase_011931_2);

#define VkglTestCase_011932_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_011932_2 "y_operator.less_or_equal.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011932, VkglTestCase_011932_1, VkglTestCase_011932_2);

#define VkglTestCase_011933_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011933_2 "_operator.less_or_equal.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011933, VkglTestCase_011933_1, VkglTestCase_011933_2);

#define VkglTestCase_011934_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_011934_2 "ry_operator.less_or_equal.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011934, VkglTestCase_011934_1, VkglTestCase_011934_2);

#define VkglTestCase_011935_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_011935_2 "y_operator.less_or_equal.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011935, VkglTestCase_011935_1, VkglTestCase_011935_2);

#define VkglTestCase_011936_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_011936_2 "ary_operator.less_or_equal.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011936, VkglTestCase_011936_1, VkglTestCase_011936_2);

#define VkglTestCase_011937_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_011937_2 "ry_operator.less_or_equal.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011937, VkglTestCase_011937_1, VkglTestCase_011937_2);

#define VkglTestCase_011938_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_011938_2 "ry_operator.less_or_equal.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011938, VkglTestCase_011938_1, VkglTestCase_011938_2);

#define VkglTestCase_011939_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_011939_2 "y_operator.less_or_equal.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011939, VkglTestCase_011939_1, VkglTestCase_011939_2);

#define VkglTestCase_011940_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_011940_2 "ary_operator.less_or_equal.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011940, VkglTestCase_011940_1, VkglTestCase_011940_2);

#define VkglTestCase_011941_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_011941_2 "ry_operator.less_or_equal.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011941, VkglTestCase_011941_1, VkglTestCase_011941_2);

#define VkglTestCase_011942_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_011942_2 "ary_operator.less_or_equal.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011942, VkglTestCase_011942_1, VkglTestCase_011942_2);

#define VkglTestCase_011943_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_011943_2 "ry_operator.less_or_equal.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011943, VkglTestCase_011943_1, VkglTestCase_011943_2);

#define VkglTestCase_011944_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_011944_2 "y_operator.less_or_equal.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011944, VkglTestCase_011944_1, VkglTestCase_011944_2);

#define VkglTestCase_011945_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011945_2 "_operator.less_or_equal.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011945, VkglTestCase_011945_1, VkglTestCase_011945_2);

#define VkglTestCase_011946_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_011946_2 "ry_operator.less_or_equal.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011946, VkglTestCase_011946_1, VkglTestCase_011946_2);

#define VkglTestCase_011947_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_011947_2 "y_operator.less_or_equal.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011947, VkglTestCase_011947_1, VkglTestCase_011947_2);
