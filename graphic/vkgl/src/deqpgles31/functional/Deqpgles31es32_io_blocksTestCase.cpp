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
#include "../ActsDeqpgles310018TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_017905_1 "dEQP-GLES31.functional.separate_shader."
#define VkglTestCase_017905_2 "validation.es32.io_blocks.missing_input"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017905, VkglTestCase_017905_1, VkglTestCase_017905_2);

#define VkglTestCase_017906_1 "dEQP-GLES31.functional.separate_shader."
#define VkglTestCase_017906_2 "validation.es32.io_blocks.missing_output"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017906, VkglTestCase_017906_1, VkglTestCase_017906_2);

#define VkglTestCase_017907_1 "dEQP-GLES31.functional.separate_shader.validatio"
#define VkglTestCase_017907_2 "n.es32.io_blocks.mismatch_number_of_declarations"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017907, VkglTestCase_017907_1, VkglTestCase_017907_2);

#define VkglTestCase_017908_1 "dEQP-GLES31.functional.separate_shader.vali"
#define VkglTestCase_017908_2 "dation.es32.io_blocks.mismatch_member_order"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017908, VkglTestCase_017908_1, VkglTestCase_017908_2);

#define VkglTestCase_017909_1 "dEQP-GLES31.functional.separate_shader.val"
#define VkglTestCase_017909_2 "idation.es32.io_blocks.mismatch_member_type"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017909, VkglTestCase_017909_1, VkglTestCase_017909_2);

#define VkglTestCase_017910_1 "dEQP-GLES31.functional.separate_shader.val"
#define VkglTestCase_017910_2 "idation.es32.io_blocks.mismatch_member_name"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017910, VkglTestCase_017910_1, VkglTestCase_017910_2);

#define VkglTestCase_017911_1 "dEQP-GLES31.functional.separate_shader.valida"
#define VkglTestCase_017911_2 "tion.es32.io_blocks.mismatch_member_precision"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017911, VkglTestCase_017911_1, VkglTestCase_017911_2);

#define VkglTestCase_017912_1 "dEQP-GLES31.functional.separate_shader.validation.es"
#define VkglTestCase_017912_2 "32.io_blocks.mismatch_different_member_interpolation"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017912, VkglTestCase_017912_1, VkglTestCase_017912_2);

#define VkglTestCase_017913_1 "dEQP-GLES31.functional.separate_shader.valida"
#define VkglTestCase_017913_2 "tion.es32.io_blocks.mismatch_member_array_size"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017913, VkglTestCase_017913_1, VkglTestCase_017913_2);

#define VkglTestCase_017914_1 "dEQP-GLES31.functional.separate_shader.validation."
#define VkglTestCase_017914_2 "es32.io_blocks.match_different_member_struct_names"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017914, VkglTestCase_017914_1, VkglTestCase_017914_2);

#define VkglTestCase_017915_1 "dEQP-GLES31.functional.separate_shader.validation"
#define VkglTestCase_017915_2 ".es32.io_blocks.mismatch_member_struct_member_name"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017915, VkglTestCase_017915_1, VkglTestCase_017915_2);

#define VkglTestCase_017916_1 "dEQP-GLES31.functional.separate_shader.validation"
#define VkglTestCase_017916_2 ".es32.io_blocks.mismatch_member_struct_member_type"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017916, VkglTestCase_017916_1, VkglTestCase_017916_2);

#define VkglTestCase_017917_1 "dEQP-GLES31.functional.separate_shader.validation.es"
#define VkglTestCase_017917_2 "32.io_blocks.mismatch_member_struct_member_precision"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017917, VkglTestCase_017917_1, VkglTestCase_017917_2);

#define VkglTestCase_017918_1 "dEQP-GLES31.functional.separate_shader.validation."
#define VkglTestCase_017918_2 "es32.io_blocks.mismatch_member_struct_member_order"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017918, VkglTestCase_017918_1, VkglTestCase_017918_2);

#define VkglTestCase_017919_1 "dEQP-GLES31.functional.separate_shader.val"
#define VkglTestCase_017919_2 "idation.es32.io_blocks.mismatch_array_size"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017919, VkglTestCase_017919_1, VkglTestCase_017919_2);

#define VkglTestCase_017920_1 "dEQP-GLES31.functional.separate_shader.validation."
#define VkglTestCase_017920_2 "es32.io_blocks.mismatch_variable_and_block_member_1"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017920, VkglTestCase_017920_1, VkglTestCase_017920_2);

#define VkglTestCase_017921_1 "dEQP-GLES31.functional.separate_shader.validation."
#define VkglTestCase_017921_2 "es32.io_blocks.mismatch_variable_and_block_member_2"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017921, VkglTestCase_017921_1, VkglTestCase_017921_2);
