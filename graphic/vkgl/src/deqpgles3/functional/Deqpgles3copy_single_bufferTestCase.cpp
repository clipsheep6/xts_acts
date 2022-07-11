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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000728_1 "dEQP-GLES3.functional.buffer.co"
#define VkglTestCase_000728_2 "py.single_buffer.array_copy_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000728, VkglTestCase_000728_1, VkglTestCase_000728_2);

#define VkglTestCase_000729_1 "dEQP-GLES3.functional.buffer.cop"
#define VkglTestCase_000729_2 "y.single_buffer.array_copy_write"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000729, VkglTestCase_000729_1, VkglTestCase_000729_2);

#define VkglTestCase_000730_1 "dEQP-GLES3.functional.buffer.copy"
#define VkglTestCase_000730_2 ".single_buffer.array_element_array"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000730, VkglTestCase_000730_1, VkglTestCase_000730_2);

#define VkglTestCase_000731_1 "dEQP-GLES3.functional.buffer.cop"
#define VkglTestCase_000731_2 "y.single_buffer.array_pixel_pack"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000731, VkglTestCase_000731_1, VkglTestCase_000731_2);

#define VkglTestCase_000732_1 "dEQP-GLES3.functional.buffer.copy"
#define VkglTestCase_000732_2 ".single_buffer.array_pixel_unpack"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000732, VkglTestCase_000732_1, VkglTestCase_000732_2);

#define VkglTestCase_000733_1 "dEQP-GLES3.functional.buffer.copy.si"
#define VkglTestCase_000733_2 "ngle_buffer.array_transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000733, VkglTestCase_000733_1, VkglTestCase_000733_2);

#define VkglTestCase_000734_1 "dEQP-GLES3.functional.buffer.c"
#define VkglTestCase_000734_2 "opy.single_buffer.array_uniform"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000734, VkglTestCase_000734_1, VkglTestCase_000734_2);

#define VkglTestCase_000735_1 "dEQP-GLES3.functional.buffer.co"
#define VkglTestCase_000735_2 "py.single_buffer.copy_read_array"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000735, VkglTestCase_000735_1, VkglTestCase_000735_2);

#define VkglTestCase_000736_1 "dEQP-GLES3.functional.buffer.copy."
#define VkglTestCase_000736_2 "single_buffer.copy_read_copy_write"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000736, VkglTestCase_000736_1, VkglTestCase_000736_2);

#define VkglTestCase_000737_1 "dEQP-GLES3.functional.buffer.copy.s"
#define VkglTestCase_000737_2 "ingle_buffer.copy_read_element_array"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000737, VkglTestCase_000737_1, VkglTestCase_000737_2);

#define VkglTestCase_000738_1 "dEQP-GLES3.functional.buffer.copy."
#define VkglTestCase_000738_2 "single_buffer.copy_read_pixel_pack"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000738, VkglTestCase_000738_1, VkglTestCase_000738_2);

#define VkglTestCase_000739_1 "dEQP-GLES3.functional.buffer.copy.s"
#define VkglTestCase_000739_2 "ingle_buffer.copy_read_pixel_unpack"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000739, VkglTestCase_000739_1, VkglTestCase_000739_2);

#define VkglTestCase_000740_1 "dEQP-GLES3.functional.buffer.copy.sing"
#define VkglTestCase_000740_2 "le_buffer.copy_read_transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000740, VkglTestCase_000740_1, VkglTestCase_000740_2);

#define VkglTestCase_000741_1 "dEQP-GLES3.functional.buffer.cop"
#define VkglTestCase_000741_2 "y.single_buffer.copy_read_uniform"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000741, VkglTestCase_000741_1, VkglTestCase_000741_2);

#define VkglTestCase_000742_1 "dEQP-GLES3.functional.buffer.cop"
#define VkglTestCase_000742_2 "y.single_buffer.copy_write_array"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000742, VkglTestCase_000742_1, VkglTestCase_000742_2);

#define VkglTestCase_000743_1 "dEQP-GLES3.functional.buffer.copy."
#define VkglTestCase_000743_2 "single_buffer.copy_write_copy_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000743, VkglTestCase_000743_1, VkglTestCase_000743_2);

#define VkglTestCase_000744_1 "dEQP-GLES3.functional.buffer.copy.si"
#define VkglTestCase_000744_2 "ngle_buffer.copy_write_element_array"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000744, VkglTestCase_000744_1, VkglTestCase_000744_2);

#define VkglTestCase_000745_1 "dEQP-GLES3.functional.buffer.copy."
#define VkglTestCase_000745_2 "single_buffer.copy_write_pixel_pack"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000745, VkglTestCase_000745_1, VkglTestCase_000745_2);

#define VkglTestCase_000746_1 "dEQP-GLES3.functional.buffer.copy.s"
#define VkglTestCase_000746_2 "ingle_buffer.copy_write_pixel_unpack"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000746, VkglTestCase_000746_1, VkglTestCase_000746_2);

#define VkglTestCase_000747_1 "dEQP-GLES3.functional.buffer.copy.sing"
#define VkglTestCase_000747_2 "le_buffer.copy_write_transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000747, VkglTestCase_000747_1, VkglTestCase_000747_2);

#define VkglTestCase_000748_1 "dEQP-GLES3.functional.buffer.copy"
#define VkglTestCase_000748_2 ".single_buffer.copy_write_uniform"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000748, VkglTestCase_000748_1, VkglTestCase_000748_2);

#define VkglTestCase_000749_1 "dEQP-GLES3.functional.buffer.copy"
#define VkglTestCase_000749_2 ".single_buffer.element_array_array"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000749, VkglTestCase_000749_1, VkglTestCase_000749_2);

#define VkglTestCase_000750_1 "dEQP-GLES3.functional.buffer.copy.s"
#define VkglTestCase_000750_2 "ingle_buffer.element_array_copy_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000750, VkglTestCase_000750_1, VkglTestCase_000750_2);

#define VkglTestCase_000751_1 "dEQP-GLES3.functional.buffer.copy.si"
#define VkglTestCase_000751_2 "ngle_buffer.element_array_copy_write"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000751, VkglTestCase_000751_1, VkglTestCase_000751_2);

#define VkglTestCase_000752_1 "dEQP-GLES3.functional.buffer.copy.si"
#define VkglTestCase_000752_2 "ngle_buffer.element_array_pixel_pack"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000752, VkglTestCase_000752_1, VkglTestCase_000752_2);

#define VkglTestCase_000753_1 "dEQP-GLES3.functional.buffer.copy.sin"
#define VkglTestCase_000753_2 "gle_buffer.element_array_pixel_unpack"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000753, VkglTestCase_000753_1, VkglTestCase_000753_2);

#define VkglTestCase_000754_1 "dEQP-GLES3.functional.buffer.copy.single"
#define VkglTestCase_000754_2 "_buffer.element_array_transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000754, VkglTestCase_000754_1, VkglTestCase_000754_2);

#define VkglTestCase_000755_1 "dEQP-GLES3.functional.buffer.copy."
#define VkglTestCase_000755_2 "single_buffer.element_array_uniform"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000755, VkglTestCase_000755_1, VkglTestCase_000755_2);

#define VkglTestCase_000756_1 "dEQP-GLES3.functional.buffer.cop"
#define VkglTestCase_000756_2 "y.single_buffer.pixel_pack_array"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000756, VkglTestCase_000756_1, VkglTestCase_000756_2);

#define VkglTestCase_000757_1 "dEQP-GLES3.functional.buffer.copy."
#define VkglTestCase_000757_2 "single_buffer.pixel_pack_copy_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000757, VkglTestCase_000757_1, VkglTestCase_000757_2);

#define VkglTestCase_000758_1 "dEQP-GLES3.functional.buffer.copy."
#define VkglTestCase_000758_2 "single_buffer.pixel_pack_copy_write"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000758, VkglTestCase_000758_1, VkglTestCase_000758_2);

#define VkglTestCase_000759_1 "dEQP-GLES3.functional.buffer.copy.si"
#define VkglTestCase_000759_2 "ngle_buffer.pixel_pack_element_array"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000759, VkglTestCase_000759_1, VkglTestCase_000759_2);

#define VkglTestCase_000760_1 "dEQP-GLES3.functional.buffer.copy.s"
#define VkglTestCase_000760_2 "ingle_buffer.pixel_pack_pixel_unpack"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000760, VkglTestCase_000760_1, VkglTestCase_000760_2);

#define VkglTestCase_000761_1 "dEQP-GLES3.functional.buffer.copy.sing"
#define VkglTestCase_000761_2 "le_buffer.pixel_pack_transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000761, VkglTestCase_000761_1, VkglTestCase_000761_2);

#define VkglTestCase_000762_1 "dEQP-GLES3.functional.buffer.copy"
#define VkglTestCase_000762_2 ".single_buffer.pixel_pack_uniform"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000762, VkglTestCase_000762_1, VkglTestCase_000762_2);

#define VkglTestCase_000763_1 "dEQP-GLES3.functional.buffer.copy"
#define VkglTestCase_000763_2 ".single_buffer.pixel_unpack_array"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000763, VkglTestCase_000763_1, VkglTestCase_000763_2);

#define VkglTestCase_000764_1 "dEQP-GLES3.functional.buffer.copy.s"
#define VkglTestCase_000764_2 "ingle_buffer.pixel_unpack_copy_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000764, VkglTestCase_000764_1, VkglTestCase_000764_2);

#define VkglTestCase_000765_1 "dEQP-GLES3.functional.buffer.copy.s"
#define VkglTestCase_000765_2 "ingle_buffer.pixel_unpack_copy_write"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000765, VkglTestCase_000765_1, VkglTestCase_000765_2);

#define VkglTestCase_000766_1 "dEQP-GLES3.functional.buffer.copy.sin"
#define VkglTestCase_000766_2 "gle_buffer.pixel_unpack_element_array"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000766, VkglTestCase_000766_1, VkglTestCase_000766_2);

#define VkglTestCase_000767_1 "dEQP-GLES3.functional.buffer.copy.s"
#define VkglTestCase_000767_2 "ingle_buffer.pixel_unpack_pixel_pack"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000767, VkglTestCase_000767_1, VkglTestCase_000767_2);

#define VkglTestCase_000768_1 "dEQP-GLES3.functional.buffer.copy.singl"
#define VkglTestCase_000768_2 "e_buffer.pixel_unpack_transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000768, VkglTestCase_000768_1, VkglTestCase_000768_2);

#define VkglTestCase_000769_1 "dEQP-GLES3.functional.buffer.copy."
#define VkglTestCase_000769_2 "single_buffer.pixel_unpack_uniform"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000769, VkglTestCase_000769_1, VkglTestCase_000769_2);

#define VkglTestCase_000770_1 "dEQP-GLES3.functional.buffer.copy.si"
#define VkglTestCase_000770_2 "ngle_buffer.transform_feedback_array"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000770, VkglTestCase_000770_1, VkglTestCase_000770_2);

#define VkglTestCase_000771_1 "dEQP-GLES3.functional.buffer.copy.sing"
#define VkglTestCase_000771_2 "le_buffer.transform_feedback_copy_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000771, VkglTestCase_000771_1, VkglTestCase_000771_2);

#define VkglTestCase_000772_1 "dEQP-GLES3.functional.buffer.copy.sing"
#define VkglTestCase_000772_2 "le_buffer.transform_feedback_copy_write"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000772, VkglTestCase_000772_1, VkglTestCase_000772_2);

#define VkglTestCase_000773_1 "dEQP-GLES3.functional.buffer.copy.single"
#define VkglTestCase_000773_2 "_buffer.transform_feedback_element_array"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000773, VkglTestCase_000773_1, VkglTestCase_000773_2);

#define VkglTestCase_000774_1 "dEQP-GLES3.functional.buffer.copy.sing"
#define VkglTestCase_000774_2 "le_buffer.transform_feedback_pixel_pack"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000774, VkglTestCase_000774_1, VkglTestCase_000774_2);

#define VkglTestCase_000775_1 "dEQP-GLES3.functional.buffer.copy.singl"
#define VkglTestCase_000775_2 "e_buffer.transform_feedback_pixel_unpack"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000775, VkglTestCase_000775_1, VkglTestCase_000775_2);

#define VkglTestCase_000776_1 "dEQP-GLES3.functional.buffer.copy.sin"
#define VkglTestCase_000776_2 "gle_buffer.transform_feedback_uniform"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000776, VkglTestCase_000776_1, VkglTestCase_000776_2);

#define VkglTestCase_000777_1 "dEQP-GLES3.functional.buffer.c"
#define VkglTestCase_000777_2 "opy.single_buffer.uniform_array"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000777, VkglTestCase_000777_1, VkglTestCase_000777_2);

#define VkglTestCase_000778_1 "dEQP-GLES3.functional.buffer.cop"
#define VkglTestCase_000778_2 "y.single_buffer.uniform_copy_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000778, VkglTestCase_000778_1, VkglTestCase_000778_2);

#define VkglTestCase_000779_1 "dEQP-GLES3.functional.buffer.copy"
#define VkglTestCase_000779_2 ".single_buffer.uniform_copy_write"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000779, VkglTestCase_000779_1, VkglTestCase_000779_2);

#define VkglTestCase_000780_1 "dEQP-GLES3.functional.buffer.copy."
#define VkglTestCase_000780_2 "single_buffer.uniform_element_array"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000780, VkglTestCase_000780_1, VkglTestCase_000780_2);

#define VkglTestCase_000781_1 "dEQP-GLES3.functional.buffer.copy"
#define VkglTestCase_000781_2 ".single_buffer.uniform_pixel_pack"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000781, VkglTestCase_000781_1, VkglTestCase_000781_2);

#define VkglTestCase_000782_1 "dEQP-GLES3.functional.buffer.copy."
#define VkglTestCase_000782_2 "single_buffer.uniform_pixel_unpack"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000782, VkglTestCase_000782_1, VkglTestCase_000782_2);

#define VkglTestCase_000783_1 "dEQP-GLES3.functional.buffer.copy.sin"
#define VkglTestCase_000783_2 "gle_buffer.uniform_transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000783, VkglTestCase_000783_1, VkglTestCase_000783_2);
