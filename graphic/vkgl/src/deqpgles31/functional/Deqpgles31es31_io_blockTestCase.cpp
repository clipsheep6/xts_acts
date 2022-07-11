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

#define VkglTestCase_004661_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004661_2 "1.io_block.mismatch_number_of_declarations"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004661, VkglTestCase_004661_1, VkglTestCase_004661_2);

#define VkglTestCase_004662_1 "dEQP-GLES31.functional.shaders.li"
#define VkglTestCase_004662_2 "nkage.es31.io_block.mismatch_order"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004662, VkglTestCase_004662_1, VkglTestCase_004662_2);

#define VkglTestCase_004663_1 "dEQP-GLES31.functional.shaders.li"
#define VkglTestCase_004663_2 "nkage.es31.io_block.mismatch_type"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004663, VkglTestCase_004663_1, VkglTestCase_004663_2);

#define VkglTestCase_004664_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004664_2 "ge.es31.io_block.mismatch_member_name"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004664, VkglTestCase_004664_1, VkglTestCase_004664_2);

#define VkglTestCase_004665_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004665_2 "es31.io_block.mismatch_member_array_size"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004665, VkglTestCase_004665_1, VkglTestCase_004665_2);

#define VkglTestCase_004666_1 "dEQP-GLES31.functional.shaders.linkage.es"
#define VkglTestCase_004666_2 "31.io_block.with_and_without_instance_name"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004666, VkglTestCase_004666_1, VkglTestCase_004666_2);

#define VkglTestCase_004667_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004667_2 "es31.io_block.mismatch_block_array_size"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004667, VkglTestCase_004667_1, VkglTestCase_004667_2);

#define VkglTestCase_004668_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004668_2 "ge.es31.io_block.missing_output_block"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004668, VkglTestCase_004668_1, VkglTestCase_004668_2);

#define VkglTestCase_004669_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004669_2 "es31.io_block.ambiguous_variable_name_1"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004669, VkglTestCase_004669_1, VkglTestCase_004669_2);

#define VkglTestCase_004670_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004670_2 "es31.io_block.ambiguous_variable_name_2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004670, VkglTestCase_004670_1, VkglTestCase_004670_2);
