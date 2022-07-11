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
#include "../ActsDeqpgles310004TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_003484_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.s"
#define VkglTestCase_003484_2 "ampler.const_expression.tessellation_control.sampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003484, VkglTestCase_003484_1, VkglTestCase_003484_2);

#define VkglTestCase_003485_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sa"
#define VkglTestCase_003485_2 "mpler.const_expression.tessellation_control.samplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003485, VkglTestCase_003485_1, VkglTestCase_003485_2);

#define VkglTestCase_003486_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.samp"
#define VkglTestCase_003486_2 "ler.const_expression.tessellation_control.sampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003486, VkglTestCase_003486_1, VkglTestCase_003486_2);

#define VkglTestCase_003487_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.s"
#define VkglTestCase_003487_2 "ampler.const_expression.tessellation_control.sampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003487, VkglTestCase_003487_1, VkglTestCase_003487_2);

#define VkglTestCase_003488_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.samp"
#define VkglTestCase_003488_2 "ler.const_expression.tessellation_control.sampler2dshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003488, VkglTestCase_003488_1, VkglTestCase_003488_2);

#define VkglTestCase_003489_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampl"
#define VkglTestCase_003489_2 "er.const_expression.tessellation_control.samplercubeshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003489, VkglTestCase_003489_1, VkglTestCase_003489_2);

#define VkglTestCase_003490_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampler"
#define VkglTestCase_003490_2 ".const_expression.tessellation_control.sampler2darrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003490, VkglTestCase_003490_1, VkglTestCase_003490_2);

#define VkglTestCase_003491_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sa"
#define VkglTestCase_003491_2 "mpler.const_expression.tessellation_control.isampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003491, VkglTestCase_003491_1, VkglTestCase_003491_2);

#define VkglTestCase_003492_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sam"
#define VkglTestCase_003492_2 "pler.const_expression.tessellation_control.isamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003492, VkglTestCase_003492_1, VkglTestCase_003492_2);

#define VkglTestCase_003493_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.samp"
#define VkglTestCase_003493_2 "ler.const_expression.tessellation_control.isampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003493, VkglTestCase_003493_1, VkglTestCase_003493_2);

#define VkglTestCase_003494_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sa"
#define VkglTestCase_003494_2 "mpler.const_expression.tessellation_control.isampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003494, VkglTestCase_003494_1, VkglTestCase_003494_2);

#define VkglTestCase_003495_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sa"
#define VkglTestCase_003495_2 "mpler.const_expression.tessellation_control.usampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003495, VkglTestCase_003495_1, VkglTestCase_003495_2);

#define VkglTestCase_003496_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sam"
#define VkglTestCase_003496_2 "pler.const_expression.tessellation_control.usamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003496, VkglTestCase_003496_1, VkglTestCase_003496_2);

#define VkglTestCase_003497_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.samp"
#define VkglTestCase_003497_2 "ler.const_expression.tessellation_control.usampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003497, VkglTestCase_003497_1, VkglTestCase_003497_2);

#define VkglTestCase_003498_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sa"
#define VkglTestCase_003498_2 "mpler.const_expression.tessellation_control.usampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003498, VkglTestCase_003498_1, VkglTestCase_003498_2);

#define VkglTestCase_003499_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampl"
#define VkglTestCase_003499_2 "er.const_expression.tessellation_control.samplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003499, VkglTestCase_003499_1, VkglTestCase_003499_2);

#define VkglTestCase_003500_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampler."
#define VkglTestCase_003500_2 "const_expression.tessellation_control.samplercubearrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003500, VkglTestCase_003500_1, VkglTestCase_003500_2);

#define VkglTestCase_003501_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampl"
#define VkglTestCase_003501_2 "er.const_expression.tessellation_control.isamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003501, VkglTestCase_003501_1, VkglTestCase_003501_2);

#define VkglTestCase_003502_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampl"
#define VkglTestCase_003502_2 "er.const_expression.tessellation_control.usamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003502, VkglTestCase_003502_1, VkglTestCase_003502_2);
