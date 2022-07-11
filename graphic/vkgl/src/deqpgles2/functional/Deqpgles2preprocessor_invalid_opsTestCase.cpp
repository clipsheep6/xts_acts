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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000301_1 "dEQP-GLES2.functional.shaders.preproc"
#define VkglTestCase_000301_2 "essor.invalid_ops.invalid_op_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000301, VkglTestCase_000301_1, VkglTestCase_000301_2);

#define VkglTestCase_000302_1 "dEQP-GLES2.functional.shaders.preproce"
#define VkglTestCase_000302_2 "ssor.invalid_ops.invalid_op_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000302, VkglTestCase_000302_1, VkglTestCase_000302_2);

#define VkglTestCase_000303_1 "dEQP-GLES2.functional.shaders.preproc"
#define VkglTestCase_000303_2 "essor.invalid_ops.invalid_op_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000303, VkglTestCase_000303_1, VkglTestCase_000303_2);

#define VkglTestCase_000304_1 "dEQP-GLES2.functional.shaders.preproce"
#define VkglTestCase_000304_2 "ssor.invalid_ops.invalid_op_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000304, VkglTestCase_000304_1, VkglTestCase_000304_2);

#define VkglTestCase_000305_1 "dEQP-GLES2.functional.shaders.preprocessor.invali"
#define VkglTestCase_000305_2 "d_ops.invalid_defined_expected_identifier_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000305, VkglTestCase_000305_1, VkglTestCase_000305_2);

#define VkglTestCase_000306_1 "dEQP-GLES2.functional.shaders.preprocessor.invalid"
#define VkglTestCase_000306_2 "_ops.invalid_defined_expected_identifier_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000306, VkglTestCase_000306_1, VkglTestCase_000306_2);

#define VkglTestCase_000307_1 "dEQP-GLES2.functional.shaders.preprocessor.invali"
#define VkglTestCase_000307_2 "d_ops.invalid_defined_expected_identifier_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000307, VkglTestCase_000307_1, VkglTestCase_000307_2);

#define VkglTestCase_000308_1 "dEQP-GLES2.functional.shaders.preprocessor.invalid"
#define VkglTestCase_000308_2 "_ops.invalid_defined_expected_identifier_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000308, VkglTestCase_000308_1, VkglTestCase_000308_2);

#define VkglTestCase_000309_1 "dEQP-GLES2.functional.shaders.preprocessor.invali"
#define VkglTestCase_000309_2 "d_ops.invalid_defined_expected_identifier_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000309, VkglTestCase_000309_1, VkglTestCase_000309_2);

#define VkglTestCase_000310_1 "dEQP-GLES2.functional.shaders.preprocessor.invalid"
#define VkglTestCase_000310_2 "_ops.invalid_defined_expected_identifier_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000310, VkglTestCase_000310_1, VkglTestCase_000310_2);

#define VkglTestCase_000311_1 "dEQP-GLES2.functional.shaders.preprocessor.invali"
#define VkglTestCase_000311_2 "d_ops.invalid_defined_expected_identifier_4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000311, VkglTestCase_000311_1, VkglTestCase_000311_2);

#define VkglTestCase_000312_1 "dEQP-GLES2.functional.shaders.preprocessor.invalid"
#define VkglTestCase_000312_2 "_ops.invalid_defined_expected_identifier_4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000312, VkglTestCase_000312_1, VkglTestCase_000312_2);

#define VkglTestCase_000313_1 "dEQP-GLES2.functional.shaders.preprocessor.invali"
#define VkglTestCase_000313_2 "d_ops.invalid_defined_expected_identifier_5_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000313, VkglTestCase_000313_1, VkglTestCase_000313_2);

#define VkglTestCase_000314_1 "dEQP-GLES2.functional.shaders.preprocessor.invalid"
#define VkglTestCase_000314_2 "_ops.invalid_defined_expected_identifier_5_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000314, VkglTestCase_000314_1, VkglTestCase_000314_2);

#define VkglTestCase_000315_1 "dEQP-GLES2.functional.shaders.preprocessor.inv"
#define VkglTestCase_000315_2 "alid_ops.invalid_defined_expected_rparen_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000315, VkglTestCase_000315_1, VkglTestCase_000315_2);

#define VkglTestCase_000316_1 "dEQP-GLES2.functional.shaders.preprocessor.inva"
#define VkglTestCase_000316_2 "lid_ops.invalid_defined_expected_rparen_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000316, VkglTestCase_000316_1, VkglTestCase_000316_2);

#define VkglTestCase_000317_1 "dEQP-GLES2.functional.shaders.preproce"
#define VkglTestCase_000317_2 "ssor.invalid_ops.defined_define_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000317, VkglTestCase_000317_1, VkglTestCase_000317_2);

#define VkglTestCase_000318_1 "dEQP-GLES2.functional.shaders.preproces"
#define VkglTestCase_000318_2 "sor.invalid_ops.defined_define_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000318, VkglTestCase_000318_1, VkglTestCase_000318_2);
