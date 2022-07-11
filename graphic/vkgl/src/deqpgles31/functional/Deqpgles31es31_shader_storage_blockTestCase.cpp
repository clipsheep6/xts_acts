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

#define VkglTestCase_004650_1 "dEQP-GLES31.functional.shaders.linkage.es31.shad"
#define VkglTestCase_004650_2 "er_storage_block.mismatch_number_of_declarations"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004650, VkglTestCase_004650_1, VkglTestCase_004650_2);

#define VkglTestCase_004651_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004651_2 "es31.shader_storage_block.mismatch_order"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004651, VkglTestCase_004651_1, VkglTestCase_004651_2);

#define VkglTestCase_004652_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004652_2 "es31.shader_storage_block.mismatch_type"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004652, VkglTestCase_004652_1, VkglTestCase_004652_2);

#define VkglTestCase_004653_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004653_2 "1.shader_storage_block.mismatch_member_name"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004653, VkglTestCase_004653_1, VkglTestCase_004653_2);

#define VkglTestCase_004654_1 "dEQP-GLES31.functional.shaders.linkage.es31.shader"
#define VkglTestCase_004654_2 "_storage_block.mismatch_member_unsized_sized_array"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004654, VkglTestCase_004654_1, VkglTestCase_004654_2);

#define VkglTestCase_004655_1 "dEQP-GLES31.functional.shaders.linkage.es31.s"
#define VkglTestCase_004655_2 "hader_storage_block.mismatch_member_array_size"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004655, VkglTestCase_004655_1, VkglTestCase_004655_2);

#define VkglTestCase_004656_1 "dEQP-GLES31.functional.shaders.linkage.es31.shader_s"
#define VkglTestCase_004656_2 "torage_block.mismatch_with_and_without_instance_name"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004656, VkglTestCase_004656_1, VkglTestCase_004656_2);

#define VkglTestCase_004657_1 "dEQP-GLES31.functional.shaders.linkage.es31.s"
#define VkglTestCase_004657_2 "hader_storage_block.mismatch_block_array_size"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004657, VkglTestCase_004657_1, VkglTestCase_004657_2);

#define VkglTestCase_004658_1 "dEQP-GLES31.functional.shaders.linkage.es31.s"
#define VkglTestCase_004658_2 "hader_storage_block.ambiguous_variable_name_1"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004658, VkglTestCase_004658_1, VkglTestCase_004658_2);

#define VkglTestCase_004659_1 "dEQP-GLES31.functional.shaders.linkage.es31.s"
#define VkglTestCase_004659_2 "hader_storage_block.ambiguous_variable_name_2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004659, VkglTestCase_004659_1, VkglTestCase_004659_2);

#define VkglTestCase_004660_1 "dEQP-GLES31.functional.shaders.linkage.es31.s"
#define VkglTestCase_004660_2 "hader_storage_block.ambiguous_variable_name_3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004660, VkglTestCase_004660_1, VkglTestCase_004660_2);
