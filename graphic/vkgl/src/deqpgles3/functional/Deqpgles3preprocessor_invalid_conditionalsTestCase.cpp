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
#include "../ActsDeqpgles30002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001024_1 "dEQP-GLES3.functional.shaders.preproces"
#define VkglTestCase_001024_2 "sor.invalid_conditionals.empty_if_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001024, VkglTestCase_001024_1, VkglTestCase_001024_2);

#define VkglTestCase_001025_1 "dEQP-GLES3.functional.shaders.preprocess"
#define VkglTestCase_001025_2 "or.invalid_conditionals.empty_if_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001025, VkglTestCase_001025_1, VkglTestCase_001025_2);

#define VkglTestCase_001026_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_001026_2 "r.invalid_conditionals.empty_ifdef_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001026, VkglTestCase_001026_1, VkglTestCase_001026_2);

#define VkglTestCase_001027_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_001027_2 ".invalid_conditionals.empty_ifdef_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001027, VkglTestCase_001027_1, VkglTestCase_001027_2);

#define VkglTestCase_001028_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_001028_2 "r.invalid_conditionals.empty_ifndef_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001028, VkglTestCase_001028_1, VkglTestCase_001028_2);

#define VkglTestCase_001029_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_001029_2 ".invalid_conditionals.empty_ifndef_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001029, VkglTestCase_001029_1, VkglTestCase_001029_2);

#define VkglTestCase_001030_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_001030_2 ".invalid_conditionals.invalid_ifdef_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001030, VkglTestCase_001030_1, VkglTestCase_001030_2);

#define VkglTestCase_001031_1 "dEQP-GLES3.functional.shaders.preprocessor."
#define VkglTestCase_001031_2 "invalid_conditionals.invalid_ifdef_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001031, VkglTestCase_001031_1, VkglTestCase_001031_2);

#define VkglTestCase_001032_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_001032_2 ".invalid_conditionals.invalid_ifndef_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001032, VkglTestCase_001032_1, VkglTestCase_001032_2);

#define VkglTestCase_001033_1 "dEQP-GLES3.functional.shaders.preprocessor."
#define VkglTestCase_001033_2 "invalid_conditionals.invalid_ifndef_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001033, VkglTestCase_001033_1, VkglTestCase_001033_2);

#define VkglTestCase_001034_1 "dEQP-GLES3.functional.shaders.preprocessor."
#define VkglTestCase_001034_2 "invalid_conditionals.empty_if_defined_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001034, VkglTestCase_001034_1, VkglTestCase_001034_2);

#define VkglTestCase_001035_1 "dEQP-GLES3.functional.shaders.preprocessor.i"
#define VkglTestCase_001035_2 "nvalid_conditionals.empty_if_defined_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001035, VkglTestCase_001035_1, VkglTestCase_001035_2);

#define VkglTestCase_001036_1 "dEQP-GLES3.functional.shaders.preprocessor.i"
#define VkglTestCase_001036_2 "nvalid_conditionals.unterminated_if_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001036, VkglTestCase_001036_1, VkglTestCase_001036_2);

#define VkglTestCase_001037_1 "dEQP-GLES3.functional.shaders.preprocessor.in"
#define VkglTestCase_001037_2 "valid_conditionals.unterminated_if_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001037, VkglTestCase_001037_1, VkglTestCase_001037_2);

#define VkglTestCase_001038_1 "dEQP-GLES3.functional.shaders.preprocessor.i"
#define VkglTestCase_001038_2 "nvalid_conditionals.unterminated_if_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001038, VkglTestCase_001038_1, VkglTestCase_001038_2);

#define VkglTestCase_001039_1 "dEQP-GLES3.functional.shaders.preprocessor.in"
#define VkglTestCase_001039_2 "valid_conditionals.unterminated_if_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001039, VkglTestCase_001039_1, VkglTestCase_001039_2);

#define VkglTestCase_001040_1 "dEQP-GLES3.functional.shaders.preprocessor.i"
#define VkglTestCase_001040_2 "nvalid_conditionals.unterminated_ifdef_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001040, VkglTestCase_001040_1, VkglTestCase_001040_2);

#define VkglTestCase_001041_1 "dEQP-GLES3.functional.shaders.preprocessor.in"
#define VkglTestCase_001041_2 "valid_conditionals.unterminated_ifdef_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001041, VkglTestCase_001041_1, VkglTestCase_001041_2);

#define VkglTestCase_001042_1 "dEQP-GLES3.functional.shaders.preprocessor.in"
#define VkglTestCase_001042_2 "valid_conditionals.unterminated_ifndef_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001042, VkglTestCase_001042_1, VkglTestCase_001042_2);

#define VkglTestCase_001043_1 "dEQP-GLES3.functional.shaders.preprocessor.inv"
#define VkglTestCase_001043_2 "alid_conditionals.unterminated_ifndef_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001043, VkglTestCase_001043_1, VkglTestCase_001043_2);

#define VkglTestCase_001044_1 "dEQP-GLES3.functional.shaders.preprocessor.in"
#define VkglTestCase_001044_2 "valid_conditionals.unterminated_else_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001044, VkglTestCase_001044_1, VkglTestCase_001044_2);

#define VkglTestCase_001045_1 "dEQP-GLES3.functional.shaders.preprocessor.inv"
#define VkglTestCase_001045_2 "alid_conditionals.unterminated_else_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001045, VkglTestCase_001045_1, VkglTestCase_001045_2);

#define VkglTestCase_001046_1 "dEQP-GLES3.functional.shaders.preprocessor.in"
#define VkglTestCase_001046_2 "valid_conditionals.unterminated_else_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001046, VkglTestCase_001046_1, VkglTestCase_001046_2);

#define VkglTestCase_001047_1 "dEQP-GLES3.functional.shaders.preprocessor.inv"
#define VkglTestCase_001047_2 "alid_conditionals.unterminated_else_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001047, VkglTestCase_001047_1, VkglTestCase_001047_2);

#define VkglTestCase_001048_1 "dEQP-GLES3.functional.shaders.preprocessor.in"
#define VkglTestCase_001048_2 "valid_conditionals.unterminated_elif_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001048, VkglTestCase_001048_1, VkglTestCase_001048_2);

#define VkglTestCase_001049_1 "dEQP-GLES3.functional.shaders.preprocessor.inv"
#define VkglTestCase_001049_2 "alid_conditionals.unterminated_elif_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001049, VkglTestCase_001049_1, VkglTestCase_001049_2);

#define VkglTestCase_001050_1 "dEQP-GLES3.functional.shaders.preprocessor.in"
#define VkglTestCase_001050_2 "valid_conditionals.unterminated_elif_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001050, VkglTestCase_001050_1, VkglTestCase_001050_2);

#define VkglTestCase_001051_1 "dEQP-GLES3.functional.shaders.preprocessor.inv"
#define VkglTestCase_001051_2 "alid_conditionals.unterminated_elif_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001051, VkglTestCase_001051_1, VkglTestCase_001051_2);

#define VkglTestCase_001052_1 "dEQP-GLES3.functional.shaders.preprocessor.in"
#define VkglTestCase_001052_2 "valid_conditionals.unterminated_elif_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001052, VkglTestCase_001052_1, VkglTestCase_001052_2);

#define VkglTestCase_001053_1 "dEQP-GLES3.functional.shaders.preprocessor.inv"
#define VkglTestCase_001053_2 "alid_conditionals.unterminated_elif_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001053, VkglTestCase_001053_1, VkglTestCase_001053_2);

#define VkglTestCase_001054_1 "dEQP-GLES3.functional.shaders.preprocessor."
#define VkglTestCase_001054_2 "invalid_conditionals.elif_after_else_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001054, VkglTestCase_001054_1, VkglTestCase_001054_2);

#define VkglTestCase_001055_1 "dEQP-GLES3.functional.shaders.preprocessor.i"
#define VkglTestCase_001055_2 "nvalid_conditionals.elif_after_else_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001055, VkglTestCase_001055_1, VkglTestCase_001055_2);

#define VkglTestCase_001056_1 "dEQP-GLES3.functional.shaders.preprocessor."
#define VkglTestCase_001056_2 "invalid_conditionals.else_without_if_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001056, VkglTestCase_001056_1, VkglTestCase_001056_2);

#define VkglTestCase_001057_1 "dEQP-GLES3.functional.shaders.preprocessor.i"
#define VkglTestCase_001057_2 "nvalid_conditionals.else_without_if_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001057, VkglTestCase_001057_1, VkglTestCase_001057_2);

#define VkglTestCase_001058_1 "dEQP-GLES3.functional.shaders.preprocessor."
#define VkglTestCase_001058_2 "invalid_conditionals.elif_without_if_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001058, VkglTestCase_001058_1, VkglTestCase_001058_2);

#define VkglTestCase_001059_1 "dEQP-GLES3.functional.shaders.preprocessor.i"
#define VkglTestCase_001059_2 "nvalid_conditionals.elif_without_if_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001059, VkglTestCase_001059_1, VkglTestCase_001059_2);

#define VkglTestCase_001060_1 "dEQP-GLES3.functional.shaders.preprocessor."
#define VkglTestCase_001060_2 "invalid_conditionals.endif_without_if_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001060, VkglTestCase_001060_1, VkglTestCase_001060_2);

#define VkglTestCase_001061_1 "dEQP-GLES3.functional.shaders.preprocessor.i"
#define VkglTestCase_001061_2 "nvalid_conditionals.endif_without_if_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001061, VkglTestCase_001061_1, VkglTestCase_001061_2);

#define VkglTestCase_001062_1 "dEQP-GLES3.functional.shaders.preprocessor."
#define VkglTestCase_001062_2 "invalid_conditionals.else_after_else_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001062, VkglTestCase_001062_1, VkglTestCase_001062_2);

#define VkglTestCase_001063_1 "dEQP-GLES3.functional.shaders.preprocessor.i"
#define VkglTestCase_001063_2 "nvalid_conditionals.else_after_else_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001063, VkglTestCase_001063_1, VkglTestCase_001063_2);

#define VkglTestCase_001064_1 "dEQP-GLES3.functional.shaders.preprocessor.inv"
#define VkglTestCase_001064_2 "alid_conditionals.nested_elif_without_if_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001064, VkglTestCase_001064_1, VkglTestCase_001064_2);

#define VkglTestCase_001065_1 "dEQP-GLES3.functional.shaders.preprocessor.inva"
#define VkglTestCase_001065_2 "lid_conditionals.nested_elif_without_if_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001065, VkglTestCase_001065_1, VkglTestCase_001065_2);

#define VkglTestCase_001066_1 "dEQP-GLES3.functional.shaders.preproces"
#define VkglTestCase_001066_2 "sor.invalid_conditionals.if_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001066, VkglTestCase_001066_1, VkglTestCase_001066_2);

#define VkglTestCase_001067_1 "dEQP-GLES3.functional.shaders.preprocess"
#define VkglTestCase_001067_2 "or.invalid_conditionals.if_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001067, VkglTestCase_001067_1, VkglTestCase_001067_2);

#define VkglTestCase_001068_1 "dEQP-GLES3.functional.shaders.preprocessor."
#define VkglTestCase_001068_2 "invalid_conditionals.tokens_after_if_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001068, VkglTestCase_001068_1, VkglTestCase_001068_2);

#define VkglTestCase_001069_1 "dEQP-GLES3.functional.shaders.preprocessor.i"
#define VkglTestCase_001069_2 "nvalid_conditionals.tokens_after_if_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001069, VkglTestCase_001069_1, VkglTestCase_001069_2);

#define VkglTestCase_001070_1 "dEQP-GLES3.functional.shaders.preprocessor.i"
#define VkglTestCase_001070_2 "nvalid_conditionals.tokens_after_elif_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001070, VkglTestCase_001070_1, VkglTestCase_001070_2);

#define VkglTestCase_001071_1 "dEQP-GLES3.functional.shaders.preprocessor.in"
#define VkglTestCase_001071_2 "valid_conditionals.tokens_after_elif_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001071, VkglTestCase_001071_1, VkglTestCase_001071_2);

#define VkglTestCase_001072_1 "dEQP-GLES3.functional.shaders.preprocessor.i"
#define VkglTestCase_001072_2 "nvalid_conditionals.tokens_after_else_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001072, VkglTestCase_001072_1, VkglTestCase_001072_2);

#define VkglTestCase_001073_1 "dEQP-GLES3.functional.shaders.preprocessor.in"
#define VkglTestCase_001073_2 "valid_conditionals.tokens_after_else_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001073, VkglTestCase_001073_1, VkglTestCase_001073_2);

#define VkglTestCase_001074_1 "dEQP-GLES3.functional.shaders.preprocessor.i"
#define VkglTestCase_001074_2 "nvalid_conditionals.tokens_after_endif_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001074, VkglTestCase_001074_1, VkglTestCase_001074_2);

#define VkglTestCase_001075_1 "dEQP-GLES3.functional.shaders.preprocessor.in"
#define VkglTestCase_001075_2 "valid_conditionals.tokens_after_endif_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001075, VkglTestCase_001075_1, VkglTestCase_001075_2);

#define VkglTestCase_001076_1 "dEQP-GLES3.functional.shaders.preprocessor.i"
#define VkglTestCase_001076_2 "nvalid_conditionals.tokens_after_ifdef_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001076, VkglTestCase_001076_1, VkglTestCase_001076_2);

#define VkglTestCase_001077_1 "dEQP-GLES3.functional.shaders.preprocessor.in"
#define VkglTestCase_001077_2 "valid_conditionals.tokens_after_ifdef_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001077, VkglTestCase_001077_1, VkglTestCase_001077_2);

#define VkglTestCase_001078_1 "dEQP-GLES3.functional.shaders.preprocessor.in"
#define VkglTestCase_001078_2 "valid_conditionals.tokens_after_ifndef_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001078, VkglTestCase_001078_1, VkglTestCase_001078_2);

#define VkglTestCase_001079_1 "dEQP-GLES3.functional.shaders.preprocessor.inv"
#define VkglTestCase_001079_2 "alid_conditionals.tokens_after_ifndef_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001079, VkglTestCase_001079_1, VkglTestCase_001079_2);

#define VkglTestCase_001080_1 "dEQP-GLES3.functional.shaders.preprocessor.inval"
#define VkglTestCase_001080_2 "id_conditionals.unterminated_nested_blocks_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001080, VkglTestCase_001080_1, VkglTestCase_001080_2);

#define VkglTestCase_001081_1 "dEQP-GLES3.functional.shaders.preprocessor.invali"
#define VkglTestCase_001081_2 "d_conditionals.unterminated_nested_blocks_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001081, VkglTestCase_001081_1, VkglTestCase_001081_2);
