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

#define VkglTestCase_000319_1 "dEQP-GLES2.functional.shaders.preprocessor.undefin"
#define VkglTestCase_000319_2 "ed_identifiers.valid_undefined_identifier_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000319, VkglTestCase_000319_1, VkglTestCase_000319_2);

#define VkglTestCase_000320_1 "dEQP-GLES2.functional.shaders.preprocessor.undefine"
#define VkglTestCase_000320_2 "d_identifiers.valid_undefined_identifier_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000320, VkglTestCase_000320_1, VkglTestCase_000320_2);

#define VkglTestCase_000321_1 "dEQP-GLES2.functional.shaders.preprocessor.undefin"
#define VkglTestCase_000321_2 "ed_identifiers.valid_undefined_identifier_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000321, VkglTestCase_000321_1, VkglTestCase_000321_2);

#define VkglTestCase_000322_1 "dEQP-GLES2.functional.shaders.preprocessor.undefine"
#define VkglTestCase_000322_2 "d_identifiers.valid_undefined_identifier_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000322, VkglTestCase_000322_1, VkglTestCase_000322_2);

#define VkglTestCase_000323_1 "dEQP-GLES2.functional.shaders.preprocessor.unde"
#define VkglTestCase_000323_2 "fined_identifiers.undefined_identifier_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000323, VkglTestCase_000323_1, VkglTestCase_000323_2);

#define VkglTestCase_000324_1 "dEQP-GLES2.functional.shaders.preprocessor.undef"
#define VkglTestCase_000324_2 "ined_identifiers.undefined_identifier_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000324, VkglTestCase_000324_1, VkglTestCase_000324_2);

#define VkglTestCase_000325_1 "dEQP-GLES2.functional.shaders.preprocessor.unde"
#define VkglTestCase_000325_2 "fined_identifiers.undefined_identifier_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000325, VkglTestCase_000325_1, VkglTestCase_000325_2);

#define VkglTestCase_000326_1 "dEQP-GLES2.functional.shaders.preprocessor.undef"
#define VkglTestCase_000326_2 "ined_identifiers.undefined_identifier_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000326, VkglTestCase_000326_1, VkglTestCase_000326_2);

#define VkglTestCase_000327_1 "dEQP-GLES2.functional.shaders.preprocessor.unde"
#define VkglTestCase_000327_2 "fined_identifiers.undefined_identifier_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000327, VkglTestCase_000327_1, VkglTestCase_000327_2);

#define VkglTestCase_000328_1 "dEQP-GLES2.functional.shaders.preprocessor.undef"
#define VkglTestCase_000328_2 "ined_identifiers.undefined_identifier_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000328, VkglTestCase_000328_1, VkglTestCase_000328_2);

#define VkglTestCase_000329_1 "dEQP-GLES2.functional.shaders.preprocessor.unde"
#define VkglTestCase_000329_2 "fined_identifiers.undefined_identifier_4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000329, VkglTestCase_000329_1, VkglTestCase_000329_2);

#define VkglTestCase_000330_1 "dEQP-GLES2.functional.shaders.preprocessor.undef"
#define VkglTestCase_000330_2 "ined_identifiers.undefined_identifier_4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000330, VkglTestCase_000330_1, VkglTestCase_000330_2);

#define VkglTestCase_000331_1 "dEQP-GLES2.functional.shaders.preprocessor.unde"
#define VkglTestCase_000331_2 "fined_identifiers.undefined_identifier_5_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000331, VkglTestCase_000331_1, VkglTestCase_000331_2);

#define VkglTestCase_000332_1 "dEQP-GLES2.functional.shaders.preprocessor.undef"
#define VkglTestCase_000332_2 "ined_identifiers.undefined_identifier_5_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000332, VkglTestCase_000332_1, VkglTestCase_000332_2);

#define VkglTestCase_000333_1 "dEQP-GLES2.functional.shaders.preprocessor.unde"
#define VkglTestCase_000333_2 "fined_identifiers.undefined_identifier_6_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000333, VkglTestCase_000333_1, VkglTestCase_000333_2);

#define VkglTestCase_000334_1 "dEQP-GLES2.functional.shaders.preprocessor.undef"
#define VkglTestCase_000334_2 "ined_identifiers.undefined_identifier_6_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000334, VkglTestCase_000334_1, VkglTestCase_000334_2);

#define VkglTestCase_000335_1 "dEQP-GLES2.functional.shaders.preprocessor.unde"
#define VkglTestCase_000335_2 "fined_identifiers.undefined_identifier_7_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000335, VkglTestCase_000335_1, VkglTestCase_000335_2);

#define VkglTestCase_000336_1 "dEQP-GLES2.functional.shaders.preprocessor.undef"
#define VkglTestCase_000336_2 "ined_identifiers.undefined_identifier_7_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000336, VkglTestCase_000336_1, VkglTestCase_000336_2);

#define VkglTestCase_000337_1 "dEQP-GLES2.functional.shaders.preprocessor.unde"
#define VkglTestCase_000337_2 "fined_identifiers.undefined_identifier_8_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000337, VkglTestCase_000337_1, VkglTestCase_000337_2);

#define VkglTestCase_000338_1 "dEQP-GLES2.functional.shaders.preprocessor.undef"
#define VkglTestCase_000338_2 "ined_identifiers.undefined_identifier_8_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000338, VkglTestCase_000338_1, VkglTestCase_000338_2);

#define VkglTestCase_000339_1 "dEQP-GLES2.functional.shaders.preprocessor.unde"
#define VkglTestCase_000339_2 "fined_identifiers.undefined_identifier_9_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000339, VkglTestCase_000339_1, VkglTestCase_000339_2);

#define VkglTestCase_000340_1 "dEQP-GLES2.functional.shaders.preprocessor.undef"
#define VkglTestCase_000340_2 "ined_identifiers.undefined_identifier_9_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000340, VkglTestCase_000340_1, VkglTestCase_000340_2);

#define VkglTestCase_000341_1 "dEQP-GLES2.functional.shaders.preprocessor.unde"
#define VkglTestCase_000341_2 "fined_identifiers.undefined_identifier_10_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000341, VkglTestCase_000341_1, VkglTestCase_000341_2);

#define VkglTestCase_000342_1 "dEQP-GLES2.functional.shaders.preprocessor.undef"
#define VkglTestCase_000342_2 "ined_identifiers.undefined_identifier_10_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000342, VkglTestCase_000342_1, VkglTestCase_000342_2);

#define VkglTestCase_000343_1 "dEQP-GLES2.functional.shaders.preprocessor.unde"
#define VkglTestCase_000343_2 "fined_identifiers.undefined_identifier_11_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000343, VkglTestCase_000343_1, VkglTestCase_000343_2);

#define VkglTestCase_000344_1 "dEQP-GLES2.functional.shaders.preprocessor.undef"
#define VkglTestCase_000344_2 "ined_identifiers.undefined_identifier_11_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000344, VkglTestCase_000344_1, VkglTestCase_000344_2);

#define VkglTestCase_000345_1 "dEQP-GLES2.functional.shaders.preprocessor.unde"
#define VkglTestCase_000345_2 "fined_identifiers.undefined_identifier_12_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000345, VkglTestCase_000345_1, VkglTestCase_000345_2);

#define VkglTestCase_000346_1 "dEQP-GLES2.functional.shaders.preprocessor.undef"
#define VkglTestCase_000346_2 "ined_identifiers.undefined_identifier_12_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000346, VkglTestCase_000346_1, VkglTestCase_000346_2);
