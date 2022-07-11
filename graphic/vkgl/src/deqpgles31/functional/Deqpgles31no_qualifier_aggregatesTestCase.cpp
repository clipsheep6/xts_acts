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
#include "../ActsDeqpgles310021TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_020645_1 "dEQP-GLES31.functional.program_interface_query.uniform.m"
#define VkglTestCase_020645_2 "atrix_row_major.default_block.no_qualifier.aggregates.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020645, VkglTestCase_020645_1, VkglTestCase_020645_2);

#define VkglTestCase_020646_1 "dEQP-GLES31.functional.program_interface_query.uniform.matri"
#define VkglTestCase_020646_2 "x_row_major.default_block.no_qualifier.aggregates.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020646, VkglTestCase_020646_1, VkglTestCase_020646_2);

#define VkglTestCase_020647_1 "dEQP-GLES31.functional.program_interface_query.uniform.matr"
#define VkglTestCase_020647_2 "ix_row_major.default_block.no_qualifier.aggregates.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020647, VkglTestCase_020647_1, VkglTestCase_020647_2);

#define VkglTestCase_020660_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020660_2 "matrix_row_major.named_block.no_qualifier.aggregates.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020660, VkglTestCase_020660_1, VkglTestCase_020660_2);

#define VkglTestCase_020661_1 "dEQP-GLES31.functional.program_interface_query.uniform.matr"
#define VkglTestCase_020661_2 "ix_row_major.named_block.no_qualifier.aggregates.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020661, VkglTestCase_020661_1, VkglTestCase_020661_2);

#define VkglTestCase_020662_1 "dEQP-GLES31.functional.program_interface_query.uniform.mat"
#define VkglTestCase_020662_2 "rix_row_major.named_block.no_qualifier.aggregates.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020662, VkglTestCase_020662_1, VkglTestCase_020662_2);

#define VkglTestCase_020739_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020739_2 "matrix_stride.default_block.no_qualifier.aggregates.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020739, VkglTestCase_020739_1, VkglTestCase_020739_2);

#define VkglTestCase_020740_1 "dEQP-GLES31.functional.program_interface_query.uniform.mat"
#define VkglTestCase_020740_2 "rix_stride.default_block.no_qualifier.aggregates.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020740, VkglTestCase_020740_1, VkglTestCase_020740_2);

#define VkglTestCase_020741_1 "dEQP-GLES31.functional.program_interface_query.uniform.mat"
#define VkglTestCase_020741_2 "rix_stride.default_block.no_qualifier.aggregates.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020741, VkglTestCase_020741_1, VkglTestCase_020741_2);

#define VkglTestCase_020754_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020754_2 ".matrix_stride.named_block.no_qualifier.aggregates.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020754, VkglTestCase_020754_1, VkglTestCase_020754_2);

#define VkglTestCase_020755_1 "dEQP-GLES31.functional.program_interface_query.uniform.ma"
#define VkglTestCase_020755_2 "trix_stride.named_block.no_qualifier.aggregates.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020755, VkglTestCase_020755_1, VkglTestCase_020755_2);

#define VkglTestCase_020756_1 "dEQP-GLES31.functional.program_interface_query.uniform.ma"
#define VkglTestCase_020756_2 "trix_stride.named_block.no_qualifier.aggregates.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020756, VkglTestCase_020756_1, VkglTestCase_020756_2);
