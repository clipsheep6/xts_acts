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

#define VkglTestCase_011948_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_011948_2 "inary_operator.greater.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011948, VkglTestCase_011948_1, VkglTestCase_011948_2);

#define VkglTestCase_011949_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_011949_2 "nary_operator.greater.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011949, VkglTestCase_011949_1, VkglTestCase_011949_2);

#define VkglTestCase_011950_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_011950_2 "nary_operator.greater.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011950, VkglTestCase_011950_1, VkglTestCase_011950_2);

#define VkglTestCase_011951_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_011951_2 "ary_operator.greater.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011951, VkglTestCase_011951_1, VkglTestCase_011951_2);

#define VkglTestCase_011952_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_011952_2 "inary_operator.greater.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011952, VkglTestCase_011952_1, VkglTestCase_011952_2);

#define VkglTestCase_011953_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_011953_2 "nary_operator.greater.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011953, VkglTestCase_011953_1, VkglTestCase_011953_2);

#define VkglTestCase_011954_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_011954_2 "binary_operator.greater.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011954, VkglTestCase_011954_1, VkglTestCase_011954_2);

#define VkglTestCase_011955_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_011955_2 "inary_operator.greater.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011955, VkglTestCase_011955_1, VkglTestCase_011955_2);

#define VkglTestCase_011956_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_011956_2 "inary_operator.greater.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011956, VkglTestCase_011956_1, VkglTestCase_011956_2);

#define VkglTestCase_011957_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_011957_2 "nary_operator.greater.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011957, VkglTestCase_011957_1, VkglTestCase_011957_2);

#define VkglTestCase_011958_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_011958_2 "binary_operator.greater.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011958, VkglTestCase_011958_1, VkglTestCase_011958_2);

#define VkglTestCase_011959_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_011959_2 "inary_operator.greater.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011959, VkglTestCase_011959_1, VkglTestCase_011959_2);

#define VkglTestCase_011960_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_011960_2 "binary_operator.greater.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011960, VkglTestCase_011960_1, VkglTestCase_011960_2);

#define VkglTestCase_011961_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_011961_2 "inary_operator.greater.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011961, VkglTestCase_011961_1, VkglTestCase_011961_2);

#define VkglTestCase_011962_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_011962_2 "nary_operator.greater.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011962, VkglTestCase_011962_1, VkglTestCase_011962_2);

#define VkglTestCase_011963_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_011963_2 "ary_operator.greater.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011963, VkglTestCase_011963_1, VkglTestCase_011963_2);

#define VkglTestCase_011964_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_011964_2 "inary_operator.greater.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011964, VkglTestCase_011964_1, VkglTestCase_011964_2);

#define VkglTestCase_011965_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_011965_2 "nary_operator.greater.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011965, VkglTestCase_011965_1, VkglTestCase_011965_2);
