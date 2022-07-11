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
#include "../ActsKhrgles30002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001060_1 "KHR-GLES3.shaders.preprocessor."
#define VkglTestCase_001060_2 "invalid_ops.invalid_op_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001060, VkglTestCase_001060_1, VkglTestCase_001060_2);

#define VkglTestCase_001061_1 "KHR-GLES3.shaders.preprocessor.i"
#define VkglTestCase_001061_2 "nvalid_ops.invalid_op_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001061, VkglTestCase_001061_1, VkglTestCase_001061_2);

#define VkglTestCase_001062_1 "KHR-GLES3.shaders.preprocessor."
#define VkglTestCase_001062_2 "invalid_ops.invalid_op_2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001062, VkglTestCase_001062_1, VkglTestCase_001062_2);

#define VkglTestCase_001063_1 "KHR-GLES3.shaders.preprocessor.i"
#define VkglTestCase_001063_2 "nvalid_ops.invalid_op_2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001063, VkglTestCase_001063_1, VkglTestCase_001063_2);

#define VkglTestCase_001064_1 "KHR-GLES3.shaders.preprocessor.invalid_ops."
#define VkglTestCase_001064_2 "invalid_defined_expected_identifier_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001064, VkglTestCase_001064_1, VkglTestCase_001064_2);

#define VkglTestCase_001065_1 "KHR-GLES3.shaders.preprocessor.invalid_ops.i"
#define VkglTestCase_001065_2 "nvalid_defined_expected_identifier_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001065, VkglTestCase_001065_1, VkglTestCase_001065_2);

#define VkglTestCase_001066_1 "KHR-GLES3.shaders.preprocessor.invalid_ops."
#define VkglTestCase_001066_2 "invalid_defined_expected_identifier_2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001066, VkglTestCase_001066_1, VkglTestCase_001066_2);

#define VkglTestCase_001067_1 "KHR-GLES3.shaders.preprocessor.invalid_ops.i"
#define VkglTestCase_001067_2 "nvalid_defined_expected_identifier_2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001067, VkglTestCase_001067_1, VkglTestCase_001067_2);

#define VkglTestCase_001068_1 "KHR-GLES3.shaders.preprocessor.invalid_ops."
#define VkglTestCase_001068_2 "invalid_defined_expected_identifier_3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001068, VkglTestCase_001068_1, VkglTestCase_001068_2);

#define VkglTestCase_001069_1 "KHR-GLES3.shaders.preprocessor.invalid_ops.i"
#define VkglTestCase_001069_2 "nvalid_defined_expected_identifier_3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001069, VkglTestCase_001069_1, VkglTestCase_001069_2);

#define VkglTestCase_001070_1 "KHR-GLES3.shaders.preprocessor.invalid_ops."
#define VkglTestCase_001070_2 "invalid_defined_expected_identifier_4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001070, VkglTestCase_001070_1, VkglTestCase_001070_2);

#define VkglTestCase_001071_1 "KHR-GLES3.shaders.preprocessor.invalid_ops.i"
#define VkglTestCase_001071_2 "nvalid_defined_expected_identifier_4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001071, VkglTestCase_001071_1, VkglTestCase_001071_2);

#define VkglTestCase_001072_1 "KHR-GLES3.shaders.preprocessor.invalid_ops."
#define VkglTestCase_001072_2 "invalid_defined_expected_identifier_5_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001072, VkglTestCase_001072_1, VkglTestCase_001072_2);

#define VkglTestCase_001073_1 "KHR-GLES3.shaders.preprocessor.invalid_ops.i"
#define VkglTestCase_001073_2 "nvalid_defined_expected_identifier_5_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001073, VkglTestCase_001073_1, VkglTestCase_001073_2);

#define VkglTestCase_001074_1 "KHR-GLES3.shaders.preprocessor.invalid_o"
#define VkglTestCase_001074_2 "ps.invalid_defined_expected_rparen_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001074, VkglTestCase_001074_1, VkglTestCase_001074_2);

#define VkglTestCase_001075_1 "KHR-GLES3.shaders.preprocessor.invalid_op"
#define VkglTestCase_001075_2 "s.invalid_defined_expected_rparen_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001075, VkglTestCase_001075_1, VkglTestCase_001075_2);

#define VkglTestCase_001076_1 "KHR-GLES3.shaders.preprocessor.i"
#define VkglTestCase_001076_2 "nvalid_ops.defined_define_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001076, VkglTestCase_001076_1, VkglTestCase_001076_2);

#define VkglTestCase_001077_1 "KHR-GLES3.shaders.preprocessor.in"
#define VkglTestCase_001077_2 "valid_ops.defined_define_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001077, VkglTestCase_001077_1, VkglTestCase_001077_2);
