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
#include "../ActsDeqpgles310005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_004921_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004921_2 "2.io_block.mismatch_number_of_declarations"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004921, VkglTestCase_004921_1, VkglTestCase_004921_2);

#define VkglTestCase_004922_1 "dEQP-GLES31.functional.shaders.li"
#define VkglTestCase_004922_2 "nkage.es32.io_block.mismatch_order"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004922, VkglTestCase_004922_1, VkglTestCase_004922_2);

#define VkglTestCase_004923_1 "dEQP-GLES31.functional.shaders.li"
#define VkglTestCase_004923_2 "nkage.es32.io_block.mismatch_type"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004923, VkglTestCase_004923_1, VkglTestCase_004923_2);

#define VkglTestCase_004924_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004924_2 "ge.es32.io_block.mismatch_member_name"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004924, VkglTestCase_004924_1, VkglTestCase_004924_2);

#define VkglTestCase_004925_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004925_2 "es32.io_block.mismatch_member_array_size"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004925, VkglTestCase_004925_1, VkglTestCase_004925_2);

#define VkglTestCase_004926_1 "dEQP-GLES31.functional.shaders.linkage.es"
#define VkglTestCase_004926_2 "32.io_block.with_and_without_instance_name"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004926, VkglTestCase_004926_1, VkglTestCase_004926_2);

#define VkglTestCase_004927_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004927_2 "es32.io_block.mismatch_block_array_size"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004927, VkglTestCase_004927_1, VkglTestCase_004927_2);

#define VkglTestCase_004928_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004928_2 "ge.es32.io_block.missing_output_block"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004928, VkglTestCase_004928_1, VkglTestCase_004928_2);

#define VkglTestCase_004929_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004929_2 "es32.io_block.ambiguous_variable_name_1"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004929, VkglTestCase_004929_1, VkglTestCase_004929_2);

#define VkglTestCase_004930_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004930_2 "es32.io_block.ambiguous_variable_name_2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004930, VkglTestCase_004930_1, VkglTestCase_004930_2);
