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

#define VkglTestCase_020757_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020757_2 "orm.matrix_stride.named_block.row_major.matrix.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020757, VkglTestCase_020757_1, VkglTestCase_020757_2);

#define VkglTestCase_020758_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020758_2 "rm.matrix_stride.named_block.row_major.matrix.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020758, VkglTestCase_020758_1, VkglTestCase_020758_2);

#define VkglTestCase_020759_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020759_2 "orm.matrix_stride.named_block.row_major.matrix.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020759, VkglTestCase_020759_1, VkglTestCase_020759_2);

#define VkglTestCase_020760_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020760_2 "rm.matrix_stride.named_block.row_major.matrix.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020760, VkglTestCase_020760_1, VkglTestCase_020760_2);

#define VkglTestCase_020761_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020761_2 "rm.matrix_stride.named_block.row_major.matrix.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020761, VkglTestCase_020761_1, VkglTestCase_020761_2);

#define VkglTestCase_020762_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020762_2 "orm.matrix_stride.named_block.row_major.matrix.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020762, VkglTestCase_020762_1, VkglTestCase_020762_2);
