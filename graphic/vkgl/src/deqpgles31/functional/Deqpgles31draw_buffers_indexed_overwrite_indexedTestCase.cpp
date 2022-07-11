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
#include "../ActsDeqpgles310038TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_037661_1 "dEQP-GLES31.functional.draw_buffers_indexed."
#define VkglTestCase_037661_2 "overwrite_indexed.common_enable_buffer_enable"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037661, VkglTestCase_037661_1, VkglTestCase_037661_2);

#define VkglTestCase_037662_1 "dEQP-GLES31.functional.draw_buffers_indexed.o"
#define VkglTestCase_037662_2 "verwrite_indexed.common_disable_buffer_disable"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037662, VkglTestCase_037662_1, VkglTestCase_037662_2);

#define VkglTestCase_037663_1 "dEQP-GLES31.functional.draw_buffers_indexed.o"
#define VkglTestCase_037663_2 "verwrite_indexed.common_disable_buffer_enable"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037663, VkglTestCase_037663_1, VkglTestCase_037663_2);

#define VkglTestCase_037664_1 "dEQP-GLES31.functional.draw_buffers_indexed.o"
#define VkglTestCase_037664_2 "verwrite_indexed.common_enable_buffer_disable"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037664, VkglTestCase_037664_1, VkglTestCase_037664_2);

#define VkglTestCase_037665_1 "dEQP-GLES31.functional.draw_buffers_indexed.ov"
#define VkglTestCase_037665_2 "erwrite_indexed.common_blend_eq_buffer_blend_eq"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037665, VkglTestCase_037665_1, VkglTestCase_037665_2);

#define VkglTestCase_037666_1 "dEQP-GLES31.functional.draw_buffers_indexed.overwri"
#define VkglTestCase_037666_2 "te_indexed.common_blend_eq_buffer_separate_blend_eq"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037666, VkglTestCase_037666_1, VkglTestCase_037666_2);

#define VkglTestCase_037667_1 "dEQP-GLES31.functional.draw_buffers_indexed.overwri"
#define VkglTestCase_037667_2 "te_indexed.common_blend_eq_buffer_advanced_blend_eq"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037667, VkglTestCase_037667_1, VkglTestCase_037667_2);

#define VkglTestCase_037668_1 "dEQP-GLES31.functional.draw_buffers_indexed.overwri"
#define VkglTestCase_037668_2 "te_indexed.common_separate_blend_eq_buffer_blend_eq"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037668, VkglTestCase_037668_1, VkglTestCase_037668_2);

#define VkglTestCase_037669_1 "dEQP-GLES31.functional.draw_buffers_indexed.overwrite_i"
#define VkglTestCase_037669_2 "ndexed.common_separate_blend_eq_buffer_separate_blend_eq"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037669, VkglTestCase_037669_1, VkglTestCase_037669_2);

#define VkglTestCase_037670_1 "dEQP-GLES31.functional.draw_buffers_indexed.overwrite_i"
#define VkglTestCase_037670_2 "ndexed.common_separate_blend_eq_buffer_advanced_blend_eq"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037670, VkglTestCase_037670_1, VkglTestCase_037670_2);

#define VkglTestCase_037671_1 "dEQP-GLES31.functional.draw_buffers_indexed.overwri"
#define VkglTestCase_037671_2 "te_indexed.common_advanced_blend_eq_buffer_blend_eq"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037671, VkglTestCase_037671_1, VkglTestCase_037671_2);

#define VkglTestCase_037672_1 "dEQP-GLES31.functional.draw_buffers_indexed.overwrite_i"
#define VkglTestCase_037672_2 "ndexed.common_advanced_blend_eq_buffer_separate_blend_eq"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037672, VkglTestCase_037672_1, VkglTestCase_037672_2);

#define VkglTestCase_037673_1 "dEQP-GLES31.functional.draw_buffers_indexed.overwrite_i"
#define VkglTestCase_037673_2 "ndexed.common_advanced_blend_eq_buffer_advanced_blend_eq"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037673, VkglTestCase_037673_1, VkglTestCase_037673_2);

#define VkglTestCase_037674_1 "dEQP-GLES31.functional.draw_buffers_indexed.over"
#define VkglTestCase_037674_2 "write_indexed.common_blend_func_buffer_blend_func"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037674, VkglTestCase_037674_1, VkglTestCase_037674_2);

#define VkglTestCase_037675_1 "dEQP-GLES31.functional.draw_buffers_indexed.overwrite"
#define VkglTestCase_037675_2 "_indexed.common_blend_func_buffer_separate_blend_func"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037675, VkglTestCase_037675_1, VkglTestCase_037675_2);

#define VkglTestCase_037676_1 "dEQP-GLES31.functional.draw_buffers_indexed.overwrite"
#define VkglTestCase_037676_2 "_indexed.common_separate_blend_func_buffer_blend_func"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037676, VkglTestCase_037676_1, VkglTestCase_037676_2);

#define VkglTestCase_037677_1 "dEQP-GLES31.functional.draw_buffers_indexed.overwrite_ind"
#define VkglTestCase_037677_2 "exed.common_separate_blend_func_buffer_separate_blend_func"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037677, VkglTestCase_037677_1, VkglTestCase_037677_2);

#define VkglTestCase_037678_1 "dEQP-GLES31.functional.draw_buffers_indexed.over"
#define VkglTestCase_037678_2 "write_indexed.common_color_mask_buffer_color_mask"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037678, VkglTestCase_037678_1, VkglTestCase_037678_2);
