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
#include "../ActsDeqpgles20014TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_013596_1 "dEQP-GLES2.functional.shader_api.s"
#define VkglTestCase_013596_2 "hader_source.replace_source_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013596, VkglTestCase_013596_1, VkglTestCase_013596_2);

#define VkglTestCase_013597_1 "dEQP-GLES2.functional.shader_api.sh"
#define VkglTestCase_013597_2 "ader_source.replace_source_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013597, VkglTestCase_013597_1, VkglTestCase_013597_2);

#define VkglTestCase_013598_1 "dEQP-GLES2.functional.shader_api.shader_so"
#define VkglTestCase_013598_2 "urce.split_source_2_null_terminated_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013598, VkglTestCase_013598_1, VkglTestCase_013598_2);

#define VkglTestCase_013599_1 "dEQP-GLES2.functional.shader_api.shader_sou"
#define VkglTestCase_013599_2 "rce.split_source_2_null_terminated_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013599, VkglTestCase_013599_1, VkglTestCase_013599_2);

#define VkglTestCase_013600_1 "dEQP-GLES2.functional.shader_api.shader_so"
#define VkglTestCase_013600_2 "urce.split_source_4_null_terminated_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013600, VkglTestCase_013600_1, VkglTestCase_013600_2);

#define VkglTestCase_013601_1 "dEQP-GLES2.functional.shader_api.shader_sou"
#define VkglTestCase_013601_2 "rce.split_source_4_null_terminated_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013601, VkglTestCase_013601_1, VkglTestCase_013601_2);

#define VkglTestCase_013602_1 "dEQP-GLES2.functional.shader_api.shader_so"
#define VkglTestCase_013602_2 "urce.split_source_8_null_terminated_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013602, VkglTestCase_013602_1, VkglTestCase_013602_2);

#define VkglTestCase_013603_1 "dEQP-GLES2.functional.shader_api.shader_sou"
#define VkglTestCase_013603_2 "rce.split_source_8_null_terminated_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013603, VkglTestCase_013603_1, VkglTestCase_013603_2);

#define VkglTestCase_013604_1 "dEQP-GLES2.functional.shader_api.shader_so"
#define VkglTestCase_013604_2 "urce.split_source_2_specify_lengths_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013604, VkglTestCase_013604_1, VkglTestCase_013604_2);

#define VkglTestCase_013605_1 "dEQP-GLES2.functional.shader_api.shader_sou"
#define VkglTestCase_013605_2 "rce.split_source_2_specify_lengths_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013605, VkglTestCase_013605_1, VkglTestCase_013605_2);

#define VkglTestCase_013606_1 "dEQP-GLES2.functional.shader_api.shader_so"
#define VkglTestCase_013606_2 "urce.split_source_4_specify_lengths_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013606, VkglTestCase_013606_1, VkglTestCase_013606_2);

#define VkglTestCase_013607_1 "dEQP-GLES2.functional.shader_api.shader_sou"
#define VkglTestCase_013607_2 "rce.split_source_4_specify_lengths_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013607, VkglTestCase_013607_1, VkglTestCase_013607_2);

#define VkglTestCase_013608_1 "dEQP-GLES2.functional.shader_api.shader_so"
#define VkglTestCase_013608_2 "urce.split_source_8_specify_lengths_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013608, VkglTestCase_013608_1, VkglTestCase_013608_2);

#define VkglTestCase_013609_1 "dEQP-GLES2.functional.shader_api.shader_sou"
#define VkglTestCase_013609_2 "rce.split_source_8_specify_lengths_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013609, VkglTestCase_013609_1, VkglTestCase_013609_2);

#define VkglTestCase_013610_1 "dEQP-GLES2.functional.shader_api.shader_sourc"
#define VkglTestCase_013610_2 "e.split_source_2_random_negative_length_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013610, VkglTestCase_013610_1, VkglTestCase_013610_2);

#define VkglTestCase_013611_1 "dEQP-GLES2.functional.shader_api.shader_source"
#define VkglTestCase_013611_2 ".split_source_2_random_negative_length_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013611, VkglTestCase_013611_1, VkglTestCase_013611_2);

#define VkglTestCase_013612_1 "dEQP-GLES2.functional.shader_api.shader_sourc"
#define VkglTestCase_013612_2 "e.split_source_4_random_negative_length_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013612, VkglTestCase_013612_1, VkglTestCase_013612_2);

#define VkglTestCase_013613_1 "dEQP-GLES2.functional.shader_api.shader_source"
#define VkglTestCase_013613_2 ".split_source_4_random_negative_length_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013613, VkglTestCase_013613_1, VkglTestCase_013613_2);

#define VkglTestCase_013614_1 "dEQP-GLES2.functional.shader_api.shader_sourc"
#define VkglTestCase_013614_2 "e.split_source_8_random_negative_length_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013614, VkglTestCase_013614_1, VkglTestCase_013614_2);

#define VkglTestCase_013615_1 "dEQP-GLES2.functional.shader_api.shader_source"
#define VkglTestCase_013615_2 ".split_source_8_random_negative_length_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013615, VkglTestCase_013615_1, VkglTestCase_013615_2);
