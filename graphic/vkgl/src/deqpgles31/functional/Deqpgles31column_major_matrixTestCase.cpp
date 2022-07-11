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

#define VkglTestCase_020766_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020766_2 "rm.matrix_stride.named_block.column_major.matrix.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020766, VkglTestCase_020766_1, VkglTestCase_020766_2);

#define VkglTestCase_020767_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020767_2 "m.matrix_stride.named_block.column_major.matrix.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020767, VkglTestCase_020767_1, VkglTestCase_020767_2);

#define VkglTestCase_020768_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020768_2 "rm.matrix_stride.named_block.column_major.matrix.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020768, VkglTestCase_020768_1, VkglTestCase_020768_2);

#define VkglTestCase_020769_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020769_2 "m.matrix_stride.named_block.column_major.matrix.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020769, VkglTestCase_020769_1, VkglTestCase_020769_2);

#define VkglTestCase_020770_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020770_2 "m.matrix_stride.named_block.column_major.matrix.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020770, VkglTestCase_020770_1, VkglTestCase_020770_2);

#define VkglTestCase_020771_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020771_2 "rm.matrix_stride.named_block.column_major.matrix.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020771, VkglTestCase_020771_1, VkglTestCase_020771_2);
