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

#define VkglTestCase_017865_1 "dEQP-GLES31.functional.separate_shader."
#define VkglTestCase_017865_2 "validation.es31.io_blocks.missing_input"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017865, VkglTestCase_017865_1, VkglTestCase_017865_2);

#define VkglTestCase_017866_1 "dEQP-GLES31.functional.separate_shader."
#define VkglTestCase_017866_2 "validation.es31.io_blocks.missing_output"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017866, VkglTestCase_017866_1, VkglTestCase_017866_2);

#define VkglTestCase_017867_1 "dEQP-GLES31.functional.separate_shader.validatio"
#define VkglTestCase_017867_2 "n.es31.io_blocks.mismatch_number_of_declarations"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017867, VkglTestCase_017867_1, VkglTestCase_017867_2);

#define VkglTestCase_017868_1 "dEQP-GLES31.functional.separate_shader.vali"
#define VkglTestCase_017868_2 "dation.es31.io_blocks.mismatch_member_order"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017868, VkglTestCase_017868_1, VkglTestCase_017868_2);

#define VkglTestCase_017869_1 "dEQP-GLES31.functional.separate_shader.val"
#define VkglTestCase_017869_2 "idation.es31.io_blocks.mismatch_member_type"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017869, VkglTestCase_017869_1, VkglTestCase_017869_2);

#define VkglTestCase_017870_1 "dEQP-GLES31.functional.separate_shader.val"
#define VkglTestCase_017870_2 "idation.es31.io_blocks.mismatch_member_name"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017870, VkglTestCase_017870_1, VkglTestCase_017870_2);

#define VkglTestCase_017871_1 "dEQP-GLES31.functional.separate_shader.valida"
#define VkglTestCase_017871_2 "tion.es31.io_blocks.mismatch_member_precision"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017871, VkglTestCase_017871_1, VkglTestCase_017871_2);

#define VkglTestCase_017872_1 "dEQP-GLES31.functional.separate_shader.validation.es"
#define VkglTestCase_017872_2 "31.io_blocks.mismatch_different_member_interpolation"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017872, VkglTestCase_017872_1, VkglTestCase_017872_2);

#define VkglTestCase_017873_1 "dEQP-GLES31.functional.separate_shader.valida"
#define VkglTestCase_017873_2 "tion.es31.io_blocks.mismatch_member_array_size"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017873, VkglTestCase_017873_1, VkglTestCase_017873_2);

#define VkglTestCase_017874_1 "dEQP-GLES31.functional.separate_shader.validation.e"
#define VkglTestCase_017874_2 "s31.io_blocks.mismatch_different_member_struct_names"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017874, VkglTestCase_017874_1, VkglTestCase_017874_2);

#define VkglTestCase_017875_1 "dEQP-GLES31.functional.separate_shader.validation"
#define VkglTestCase_017875_2 ".es31.io_blocks.mismatch_member_struct_member_name"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017875, VkglTestCase_017875_1, VkglTestCase_017875_2);

#define VkglTestCase_017876_1 "dEQP-GLES31.functional.separate_shader.validation"
#define VkglTestCase_017876_2 ".es31.io_blocks.mismatch_member_struct_member_type"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017876, VkglTestCase_017876_1, VkglTestCase_017876_2);

#define VkglTestCase_017877_1 "dEQP-GLES31.functional.separate_shader.validation.es"
#define VkglTestCase_017877_2 "31.io_blocks.mismatch_member_struct_member_precision"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017877, VkglTestCase_017877_1, VkglTestCase_017877_2);

#define VkglTestCase_017878_1 "dEQP-GLES31.functional.separate_shader.validation."
#define VkglTestCase_017878_2 "es31.io_blocks.mismatch_member_struct_member_order"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017878, VkglTestCase_017878_1, VkglTestCase_017878_2);

#define VkglTestCase_017879_1 "dEQP-GLES31.functional.separate_shader.val"
#define VkglTestCase_017879_2 "idation.es31.io_blocks.mismatch_array_size"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017879, VkglTestCase_017879_1, VkglTestCase_017879_2);

#define VkglTestCase_017880_1 "dEQP-GLES31.functional.separate_shader.validation."
#define VkglTestCase_017880_2 "es31.io_blocks.mismatch_variable_and_block_member_1"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017880, VkglTestCase_017880_1, VkglTestCase_017880_2);

#define VkglTestCase_017881_1 "dEQP-GLES31.functional.separate_shader.validation."
#define VkglTestCase_017881_2 "es31.io_blocks.mismatch_variable_and_block_member_2"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017881, VkglTestCase_017881_1, VkglTestCase_017881_2);
