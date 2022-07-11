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
#include "../Khrgles3BaseFunc.h"
#include "../ActsKhrgles30005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_004062_1 "KHR-GLES3.number_parsing.unsigned_"
#define VkglTestCase_004062_2 "integer_above_signed_range_decimal"
SHRINK_HWTEST_F(ActsKhrgles30005TestSuite, TestCase_004062, VkglTestCase_004062_1, VkglTestCase_004062_2);

#define VkglTestCase_004063_1 "KHR-GLES3.number_parsing.unsigned"
#define VkglTestCase_004063_2 "_integer_above_signed_range_base8"
SHRINK_HWTEST_F(ActsKhrgles30005TestSuite, TestCase_004063, VkglTestCase_004063_1, VkglTestCase_004063_2);

#define VkglTestCase_004064_1 "KHR-GLES3.number_parsing.unsigned"
#define VkglTestCase_004064_2 "_integer_above_signed_range_base16"
SHRINK_HWTEST_F(ActsKhrgles30005TestSuite, TestCase_004064, VkglTestCase_004064_1, VkglTestCase_004064_2);

#define VkglTestCase_004065_1 "KHR-GLES3.number_parsing.unsigned_integer"
#define VkglTestCase_004065_2 "_smallest_value_above_signed_range_decimal"
SHRINK_HWTEST_F(ActsKhrgles30005TestSuite, TestCase_004065, VkglTestCase_004065_1, VkglTestCase_004065_2);

#define VkglTestCase_004066_1 "KHR-GLES3.number_parsing.unsigned_intege"
#define VkglTestCase_004066_2 "r_smallest_value_above_signed_range_base8"
SHRINK_HWTEST_F(ActsKhrgles30005TestSuite, TestCase_004066, VkglTestCase_004066_1, VkglTestCase_004066_2);

#define VkglTestCase_004067_1 "KHR-GLES3.number_parsing.unsigned_integer"
#define VkglTestCase_004067_2 "_smallest_value_above_signed_range_base16"
SHRINK_HWTEST_F(ActsKhrgles30005TestSuite, TestCase_004067, VkglTestCase_004067_1, VkglTestCase_004067_2);

#define VkglTestCase_004068_1 "KHR-GLES3.number_parsing.unsi"
#define VkglTestCase_004068_2 "gned_integer_max_value_decimal"
SHRINK_HWTEST_F(ActsKhrgles30005TestSuite, TestCase_004068, VkglTestCase_004068_1, VkglTestCase_004068_2);

#define VkglTestCase_004069_1 "KHR-GLES3.number_parsing.uns"
#define VkglTestCase_004069_2 "igned_integer_max_value_base8"
SHRINK_HWTEST_F(ActsKhrgles30005TestSuite, TestCase_004069, VkglTestCase_004069_1, VkglTestCase_004069_2);

#define VkglTestCase_004070_1 "KHR-GLES3.number_parsing.unsi"
#define VkglTestCase_004070_2 "gned_integer_max_value_base16"
SHRINK_HWTEST_F(ActsKhrgles30005TestSuite, TestCase_004070, VkglTestCase_004070_1, VkglTestCase_004070_2);

#define VkglTestCase_004071_1 "KHR-GLES3.number_parsing.unsigne"
#define VkglTestCase_004071_2 "d_integer_too_large_value_invalid"
SHRINK_HWTEST_F(ActsKhrgles30005TestSuite, TestCase_004071, VkglTestCase_004071_1, VkglTestCase_004071_2);

#define VkglTestCase_004072_1 "KHR-GLES3.number_parsing.unsigne"
#define VkglTestCase_004072_2 "d_integer_negative_value_as_uint"
SHRINK_HWTEST_F(ActsKhrgles30005TestSuite, TestCase_004072, VkglTestCase_004072_1, VkglTestCase_004072_2);

#define VkglTestCase_004073_1 "KHR-GLES3.number_parsing.fl"
#define VkglTestCase_004073_2 "oat_out_of_range_as_infinity"
SHRINK_HWTEST_F(ActsKhrgles30005TestSuite, TestCase_004073, VkglTestCase_004073_1, VkglTestCase_004073_2);

#define VkglTestCase_004074_1 "KHR-GLES3.number_parsing."
#define VkglTestCase_004074_2 "float_out_of_range_as_zero"
SHRINK_HWTEST_F(ActsKhrgles30005TestSuite, TestCase_004074, VkglTestCase_004074_1, VkglTestCase_004074_2);

#define VkglTestCase_004075_1 "KHR-GLES3.number_parsing.float_no_limi"
#define VkglTestCase_004075_2 "t_on_number_of_digits_positive_exponent"
SHRINK_HWTEST_F(ActsKhrgles30005TestSuite, TestCase_004075, VkglTestCase_004075_1, VkglTestCase_004075_2);

#define VkglTestCase_004076_1 "KHR-GLES3.number_parsing.float_no_limi"
#define VkglTestCase_004076_2 "t_on_number_of_digits_negative_exponent"
SHRINK_HWTEST_F(ActsKhrgles30005TestSuite, TestCase_004076, VkglTestCase_004076_1, VkglTestCase_004076_2);

#define VkglTestCase_004077_1 "KHR-GLES3.number_parsing.float_slightly_o"
#define VkglTestCase_004077_2 "ut_of_range_exponent_as_positive_infinity"
SHRINK_HWTEST_F(ActsKhrgles30005TestSuite, TestCase_004077, VkglTestCase_004077_1, VkglTestCase_004077_2);

#define VkglTestCase_004078_1 "KHR-GLES3.number_parsing.float"
#define VkglTestCase_004078_2 "_overflow_to_positive_infinity"
SHRINK_HWTEST_F(ActsKhrgles30005TestSuite, TestCase_004078, VkglTestCase_004078_1, VkglTestCase_004078_2);

#define VkglTestCase_004079_1 "KHR-GLES3.number_parsing.float"
#define VkglTestCase_004079_2 "_overflow_to_negative_infinity"
SHRINK_HWTEST_F(ActsKhrgles30005TestSuite, TestCase_004079, VkglTestCase_004079_1, VkglTestCase_004079_2);
