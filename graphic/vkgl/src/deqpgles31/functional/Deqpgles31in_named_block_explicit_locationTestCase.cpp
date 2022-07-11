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
#include "../ActsDeqpgles310022TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_021791_1 "dEQP-GLES31.functional.program_interface_query.program_input.res"
#define VkglTestCase_021791_2 "ource_list.interface_blocks.in.named_block_explicit_location.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021791, VkglTestCase_021791_1, VkglTestCase_021791_2);

#define VkglTestCase_021792_1 "dEQP-GLES31.functional.program_interface_query.program_input.resour"
#define VkglTestCase_021792_2 "ce_list.interface_blocks.in.named_block_explicit_location.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021792, VkglTestCase_021792_1, VkglTestCase_021792_2);

#define VkglTestCase_021793_1 "dEQP-GLES31.functional.program_interface_query.program_input.resour"
#define VkglTestCase_021793_2 "ce_list.interface_blocks.in.named_block_explicit_location.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021793, VkglTestCase_021793_1, VkglTestCase_021793_2);

#define VkglTestCase_021826_1 "dEQP-GLES31.functional.program_interface_query.program_input.a"
#define VkglTestCase_021826_2 "rray_size.interface_blocks.in.named_block_explicit_location.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021826, VkglTestCase_021826_1, VkglTestCase_021826_2);

#define VkglTestCase_021827_1 "dEQP-GLES31.functional.program_interface_query.program_input.array"
#define VkglTestCase_021827_2 "_size.interface_blocks.in.named_block_explicit_location.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021827, VkglTestCase_021827_1, VkglTestCase_021827_2);

#define VkglTestCase_021828_1 "dEQP-GLES31.functional.program_interface_query.program_input.arra"
#define VkglTestCase_021828_2 "y_size.interface_blocks.in.named_block_explicit_location.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021828, VkglTestCase_021828_1, VkglTestCase_021828_2);

#define VkglTestCase_021875_1 "dEQP-GLES31.functional.program_interface_query.program_input."
#define VkglTestCase_021875_2 "location.interface_blocks.in.named_block_explicit_location.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021875, VkglTestCase_021875_1, VkglTestCase_021875_2);

#define VkglTestCase_021876_1 "dEQP-GLES31.functional.program_interface_query.program_input.location."
#define VkglTestCase_021876_2 "interface_blocks.in.named_block_explicit_location.var_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021876, VkglTestCase_021876_1, VkglTestCase_021876_2);

#define VkglTestCase_021877_1 "dEQP-GLES31.functional.program_interface_query.program_input.loca"
#define VkglTestCase_021877_2 "tion.interface_blocks.in.named_block_explicit_location.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021877, VkglTestCase_021877_1, VkglTestCase_021877_2);

#define VkglTestCase_021878_1 "dEQP-GLES31.functional.program_interface_query.program_input.location.inte"
#define VkglTestCase_021878_2 "rface_blocks.in.named_block_explicit_location.var_struct_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021878, VkglTestCase_021878_1, VkglTestCase_021878_2);

#define VkglTestCase_021879_1 "dEQP-GLES31.functional.program_interface_query.program_input.loc"
#define VkglTestCase_021879_2 "ation.interface_blocks.in.named_block_explicit_location.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021879, VkglTestCase_021879_1, VkglTestCase_021879_2);

#define VkglTestCase_021880_1 "dEQP-GLES31.functional.program_interface_query.program_input.location.int"
#define VkglTestCase_021880_2 "erface_blocks.in.named_block_explicit_location.var_array_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021880, VkglTestCase_021880_1, VkglTestCase_021880_2);

#define VkglTestCase_021925_1 "dEQP-GLES31.functional.program_interface_query.program_input.na"
#define VkglTestCase_021925_2 "me_length.interface_blocks.in.named_block_explicit_location.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021925, VkglTestCase_021925_1, VkglTestCase_021925_2);

#define VkglTestCase_021926_1 "dEQP-GLES31.functional.program_interface_query.program_input.name_"
#define VkglTestCase_021926_2 "length.interface_blocks.in.named_block_explicit_location.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021926, VkglTestCase_021926_1, VkglTestCase_021926_2);

#define VkglTestCase_021927_1 "dEQP-GLES31.functional.program_interface_query.program_input.name_"
#define VkglTestCase_021927_2 "length.interface_blocks.in.named_block_explicit_location.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021927, VkglTestCase_021927_1, VkglTestCase_021927_2);

#define VkglTestCase_022327_1 "dEQP-GLES31.functional.program_interface_query.program_input.is"
#define VkglTestCase_022327_2 "_per_patch.interface_blocks.in.named_block_explicit_location.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022327, VkglTestCase_022327_1, VkglTestCase_022327_2);

#define VkglTestCase_022328_1 "dEQP-GLES31.functional.program_interface_query.program_input.is_per"
#define VkglTestCase_022328_2 "_patch.interface_blocks.in.named_block_explicit_location.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022328, VkglTestCase_022328_1, VkglTestCase_022328_2);

#define VkglTestCase_022329_1 "dEQP-GLES31.functional.program_interface_query.program_input.is_pe"
#define VkglTestCase_022329_2 "r_patch.interface_blocks.in.named_block_explicit_location.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022329, VkglTestCase_022329_1, VkglTestCase_022329_2);
