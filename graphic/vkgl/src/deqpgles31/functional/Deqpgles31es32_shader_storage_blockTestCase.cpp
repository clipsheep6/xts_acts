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

#define VkglTestCase_004910_1 "dEQP-GLES31.functional.shaders.linkage.es32.shad"
#define VkglTestCase_004910_2 "er_storage_block.mismatch_number_of_declarations"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004910, VkglTestCase_004910_1, VkglTestCase_004910_2);

#define VkglTestCase_004911_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004911_2 "es32.shader_storage_block.mismatch_order"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004911, VkglTestCase_004911_1, VkglTestCase_004911_2);

#define VkglTestCase_004912_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004912_2 "es32.shader_storage_block.mismatch_type"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004912, VkglTestCase_004912_1, VkglTestCase_004912_2);

#define VkglTestCase_004913_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004913_2 "2.shader_storage_block.mismatch_member_name"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004913, VkglTestCase_004913_1, VkglTestCase_004913_2);

#define VkglTestCase_004914_1 "dEQP-GLES31.functional.shaders.linkage.es32.shader"
#define VkglTestCase_004914_2 "_storage_block.mismatch_member_unsized_sized_array"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004914, VkglTestCase_004914_1, VkglTestCase_004914_2);

#define VkglTestCase_004915_1 "dEQP-GLES31.functional.shaders.linkage.es32.s"
#define VkglTestCase_004915_2 "hader_storage_block.mismatch_member_array_size"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004915, VkglTestCase_004915_1, VkglTestCase_004915_2);

#define VkglTestCase_004916_1 "dEQP-GLES31.functional.shaders.linkage.es32.shader_s"
#define VkglTestCase_004916_2 "torage_block.mismatch_with_and_without_instance_name"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004916, VkglTestCase_004916_1, VkglTestCase_004916_2);

#define VkglTestCase_004917_1 "dEQP-GLES31.functional.shaders.linkage.es32.s"
#define VkglTestCase_004917_2 "hader_storage_block.mismatch_block_array_size"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004917, VkglTestCase_004917_1, VkglTestCase_004917_2);

#define VkglTestCase_004918_1 "dEQP-GLES31.functional.shaders.linkage.es32.s"
#define VkglTestCase_004918_2 "hader_storage_block.ambiguous_variable_name_1"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004918, VkglTestCase_004918_1, VkglTestCase_004918_2);

#define VkglTestCase_004919_1 "dEQP-GLES31.functional.shaders.linkage.es32.s"
#define VkglTestCase_004919_2 "hader_storage_block.ambiguous_variable_name_2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004919, VkglTestCase_004919_1, VkglTestCase_004919_2);

#define VkglTestCase_004920_1 "dEQP-GLES31.functional.shaders.linkage.es32.s"
#define VkglTestCase_004920_2 "hader_storage_block.ambiguous_variable_name_3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004920, VkglTestCase_004920_1, VkglTestCase_004920_2);
