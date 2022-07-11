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
#include "../ActsDeqpgles310024TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_023491_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_023491_2 "er_variable.array_size.named_block.sized.types.float"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023491, VkglTestCase_023491_1, VkglTestCase_023491_2);

#define VkglTestCase_023492_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023492_2 "fer_variable.array_size.named_block.sized.types.int"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023492, VkglTestCase_023492_1, VkglTestCase_023492_2);

#define VkglTestCase_023493_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_023493_2 "er_variable.array_size.named_block.sized.types.uint"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023493, VkglTestCase_023493_1, VkglTestCase_023493_2);

#define VkglTestCase_023494_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_023494_2 "er_variable.array_size.named_block.sized.types.bool"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023494, VkglTestCase_023494_1, VkglTestCase_023494_2);

#define VkglTestCase_023495_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_023495_2 "er_variable.array_size.named_block.sized.types.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023495, VkglTestCase_023495_1, VkglTestCase_023495_2);

#define VkglTestCase_023496_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_023496_2 "er_variable.array_size.named_block.sized.types.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023496, VkglTestCase_023496_1, VkglTestCase_023496_2);

#define VkglTestCase_023497_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_023497_2 "er_variable.array_size.named_block.sized.types.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023497, VkglTestCase_023497_1, VkglTestCase_023497_2);

#define VkglTestCase_023498_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_023498_2 "er_variable.array_size.named_block.sized.types.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023498, VkglTestCase_023498_1, VkglTestCase_023498_2);

#define VkglTestCase_023499_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_023499_2 "er_variable.array_size.named_block.sized.types.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023499, VkglTestCase_023499_1, VkglTestCase_023499_2);

#define VkglTestCase_023500_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_023500_2 "er_variable.array_size.named_block.sized.types.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023500, VkglTestCase_023500_1, VkglTestCase_023500_2);

#define VkglTestCase_023501_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023501_2 "r_variable.array_size.named_block.sized.types.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023501, VkglTestCase_023501_1, VkglTestCase_023501_2);

#define VkglTestCase_023502_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_023502_2 "er_variable.array_size.named_block.sized.types.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023502, VkglTestCase_023502_1, VkglTestCase_023502_2);

#define VkglTestCase_023503_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023503_2 "r_variable.array_size.named_block.sized.types.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023503, VkglTestCase_023503_1, VkglTestCase_023503_2);

#define VkglTestCase_023504_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_023504_2 "er_variable.array_size.named_block.sized.types.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023504, VkglTestCase_023504_1, VkglTestCase_023504_2);

#define VkglTestCase_023604_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023604_2 "r_variable.array_stride.named_block.sized.types.float"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023604, VkglTestCase_023604_1, VkglTestCase_023604_2);

#define VkglTestCase_023605_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_023605_2 "er_variable.array_stride.named_block.sized.types.int"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023605, VkglTestCase_023605_1, VkglTestCase_023605_2);

#define VkglTestCase_023606_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023606_2 "r_variable.array_stride.named_block.sized.types.uint"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023606, VkglTestCase_023606_1, VkglTestCase_023606_2);

#define VkglTestCase_023607_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023607_2 "r_variable.array_stride.named_block.sized.types.bool"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023607, VkglTestCase_023607_1, VkglTestCase_023607_2);

#define VkglTestCase_023608_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023608_2 "r_variable.array_stride.named_block.sized.types.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023608, VkglTestCase_023608_1, VkglTestCase_023608_2);

#define VkglTestCase_023609_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023609_2 "r_variable.array_stride.named_block.sized.types.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023609, VkglTestCase_023609_1, VkglTestCase_023609_2);

#define VkglTestCase_023610_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023610_2 "r_variable.array_stride.named_block.sized.types.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023610, VkglTestCase_023610_1, VkglTestCase_023610_2);

#define VkglTestCase_023611_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023611_2 "r_variable.array_stride.named_block.sized.types.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023611, VkglTestCase_023611_1, VkglTestCase_023611_2);

#define VkglTestCase_023612_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023612_2 "r_variable.array_stride.named_block.sized.types.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023612, VkglTestCase_023612_1, VkglTestCase_023612_2);

#define VkglTestCase_023613_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023613_2 "r_variable.array_stride.named_block.sized.types.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023613, VkglTestCase_023613_1, VkglTestCase_023613_2);

#define VkglTestCase_023614_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023614_2 "_variable.array_stride.named_block.sized.types.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023614, VkglTestCase_023614_1, VkglTestCase_023614_2);

#define VkglTestCase_023615_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023615_2 "r_variable.array_stride.named_block.sized.types.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023615, VkglTestCase_023615_1, VkglTestCase_023615_2);

#define VkglTestCase_023616_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023616_2 "_variable.array_stride.named_block.sized.types.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023616, VkglTestCase_023616_1, VkglTestCase_023616_2);

#define VkglTestCase_023617_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023617_2 "r_variable.array_stride.named_block.sized.types.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023617, VkglTestCase_023617_1, VkglTestCase_023617_2);
