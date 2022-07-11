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
#include "../ActsDeqpgles30001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000978_1 "dEQP-GLES3.functional.shaders.preproc"
#define VkglTestCase_000978_2 "essor.invalid_ops.invalid_op_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000978, VkglTestCase_000978_1, VkglTestCase_000978_2);

#define VkglTestCase_000979_1 "dEQP-GLES3.functional.shaders.preproce"
#define VkglTestCase_000979_2 "ssor.invalid_ops.invalid_op_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000979, VkglTestCase_000979_1, VkglTestCase_000979_2);

#define VkglTestCase_000980_1 "dEQP-GLES3.functional.shaders.preproc"
#define VkglTestCase_000980_2 "essor.invalid_ops.invalid_op_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000980, VkglTestCase_000980_1, VkglTestCase_000980_2);

#define VkglTestCase_000981_1 "dEQP-GLES3.functional.shaders.preproce"
#define VkglTestCase_000981_2 "ssor.invalid_ops.invalid_op_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000981, VkglTestCase_000981_1, VkglTestCase_000981_2);

#define VkglTestCase_000982_1 "dEQP-GLES3.functional.shaders.preprocessor.invali"
#define VkglTestCase_000982_2 "d_ops.invalid_defined_expected_identifier_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000982, VkglTestCase_000982_1, VkglTestCase_000982_2);

#define VkglTestCase_000983_1 "dEQP-GLES3.functional.shaders.preprocessor.invalid"
#define VkglTestCase_000983_2 "_ops.invalid_defined_expected_identifier_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000983, VkglTestCase_000983_1, VkglTestCase_000983_2);

#define VkglTestCase_000984_1 "dEQP-GLES3.functional.shaders.preprocessor.invali"
#define VkglTestCase_000984_2 "d_ops.invalid_defined_expected_identifier_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000984, VkglTestCase_000984_1, VkglTestCase_000984_2);

#define VkglTestCase_000985_1 "dEQP-GLES3.functional.shaders.preprocessor.invalid"
#define VkglTestCase_000985_2 "_ops.invalid_defined_expected_identifier_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000985, VkglTestCase_000985_1, VkglTestCase_000985_2);

#define VkglTestCase_000986_1 "dEQP-GLES3.functional.shaders.preprocessor.invali"
#define VkglTestCase_000986_2 "d_ops.invalid_defined_expected_identifier_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000986, VkglTestCase_000986_1, VkglTestCase_000986_2);

#define VkglTestCase_000987_1 "dEQP-GLES3.functional.shaders.preprocessor.invalid"
#define VkglTestCase_000987_2 "_ops.invalid_defined_expected_identifier_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000987, VkglTestCase_000987_1, VkglTestCase_000987_2);

#define VkglTestCase_000988_1 "dEQP-GLES3.functional.shaders.preprocessor.invali"
#define VkglTestCase_000988_2 "d_ops.invalid_defined_expected_identifier_4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000988, VkglTestCase_000988_1, VkglTestCase_000988_2);

#define VkglTestCase_000989_1 "dEQP-GLES3.functional.shaders.preprocessor.invalid"
#define VkglTestCase_000989_2 "_ops.invalid_defined_expected_identifier_4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000989, VkglTestCase_000989_1, VkglTestCase_000989_2);

#define VkglTestCase_000990_1 "dEQP-GLES3.functional.shaders.preprocessor.invali"
#define VkglTestCase_000990_2 "d_ops.invalid_defined_expected_identifier_5_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000990, VkglTestCase_000990_1, VkglTestCase_000990_2);

#define VkglTestCase_000991_1 "dEQP-GLES3.functional.shaders.preprocessor.invalid"
#define VkglTestCase_000991_2 "_ops.invalid_defined_expected_identifier_5_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000991, VkglTestCase_000991_1, VkglTestCase_000991_2);

#define VkglTestCase_000992_1 "dEQP-GLES3.functional.shaders.preprocessor.inv"
#define VkglTestCase_000992_2 "alid_ops.invalid_defined_expected_rparen_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000992, VkglTestCase_000992_1, VkglTestCase_000992_2);

#define VkglTestCase_000993_1 "dEQP-GLES3.functional.shaders.preprocessor.inva"
#define VkglTestCase_000993_2 "lid_ops.invalid_defined_expected_rparen_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000993, VkglTestCase_000993_1, VkglTestCase_000993_2);

#define VkglTestCase_000994_1 "dEQP-GLES3.functional.shaders.preproce"
#define VkglTestCase_000994_2 "ssor.invalid_ops.defined_define_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000994, VkglTestCase_000994_1, VkglTestCase_000994_2);

#define VkglTestCase_000995_1 "dEQP-GLES3.functional.shaders.preproces"
#define VkglTestCase_000995_2 "sor.invalid_ops.defined_define_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000995, VkglTestCase_000995_1, VkglTestCase_000995_2);
