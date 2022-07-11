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

#define VkglTestCase_037643_1 "dEQP-GLES31.functional.draw_buffers_indexed."
#define VkglTestCase_037643_2 "overwrite_common.common_enable_buffer_enable"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037643, VkglTestCase_037643_1, VkglTestCase_037643_2);

#define VkglTestCase_037644_1 "dEQP-GLES31.functional.draw_buffers_indexed.o"
#define VkglTestCase_037644_2 "verwrite_common.common_disable_buffer_disable"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037644, VkglTestCase_037644_1, VkglTestCase_037644_2);

#define VkglTestCase_037645_1 "dEQP-GLES31.functional.draw_buffers_indexed."
#define VkglTestCase_037645_2 "overwrite_common.common_disable_buffer_enable"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037645, VkglTestCase_037645_1, VkglTestCase_037645_2);

#define VkglTestCase_037646_1 "dEQP-GLES31.functional.draw_buffers_indexed."
#define VkglTestCase_037646_2 "overwrite_common.common_enable_buffer_disable"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037646, VkglTestCase_037646_1, VkglTestCase_037646_2);

#define VkglTestCase_037647_1 "dEQP-GLES31.functional.draw_buffers_indexed.ov"
#define VkglTestCase_037647_2 "erwrite_common.common_blend_eq_buffer_blend_eq"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037647, VkglTestCase_037647_1, VkglTestCase_037647_2);

#define VkglTestCase_037648_1 "dEQP-GLES31.functional.draw_buffers_indexed.overwr"
#define VkglTestCase_037648_2 "ite_common.common_blend_eq_buffer_separate_blend_eq"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037648, VkglTestCase_037648_1, VkglTestCase_037648_2);

#define VkglTestCase_037649_1 "dEQP-GLES31.functional.draw_buffers_indexed.overwr"
#define VkglTestCase_037649_2 "ite_common.common_blend_eq_buffer_advanced_blend_eq"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037649, VkglTestCase_037649_1, VkglTestCase_037649_2);

#define VkglTestCase_037650_1 "dEQP-GLES31.functional.draw_buffers_indexed.overwr"
#define VkglTestCase_037650_2 "ite_common.common_separate_blend_eq_buffer_blend_eq"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037650, VkglTestCase_037650_1, VkglTestCase_037650_2);

#define VkglTestCase_037651_1 "dEQP-GLES31.functional.draw_buffers_indexed.overwrite_c"
#define VkglTestCase_037651_2 "ommon.common_separate_blend_eq_buffer_separate_blend_eq"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037651, VkglTestCase_037651_1, VkglTestCase_037651_2);

#define VkglTestCase_037652_1 "dEQP-GLES31.functional.draw_buffers_indexed.overwrite_c"
#define VkglTestCase_037652_2 "ommon.common_separate_blend_eq_buffer_advanced_blend_eq"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037652, VkglTestCase_037652_1, VkglTestCase_037652_2);

#define VkglTestCase_037653_1 "dEQP-GLES31.functional.draw_buffers_indexed.overwr"
#define VkglTestCase_037653_2 "ite_common.common_advanced_blend_eq_buffer_blend_eq"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037653, VkglTestCase_037653_1, VkglTestCase_037653_2);

#define VkglTestCase_037654_1 "dEQP-GLES31.functional.draw_buffers_indexed.overwrite_c"
#define VkglTestCase_037654_2 "ommon.common_advanced_blend_eq_buffer_separate_blend_eq"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037654, VkglTestCase_037654_1, VkglTestCase_037654_2);

#define VkglTestCase_037655_1 "dEQP-GLES31.functional.draw_buffers_indexed.overwrite_c"
#define VkglTestCase_037655_2 "ommon.common_advanced_blend_eq_buffer_advanced_blend_eq"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037655, VkglTestCase_037655_1, VkglTestCase_037655_2);

#define VkglTestCase_037656_1 "dEQP-GLES31.functional.draw_buffers_indexed.over"
#define VkglTestCase_037656_2 "write_common.common_blend_func_buffer_blend_func"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037656, VkglTestCase_037656_1, VkglTestCase_037656_2);

#define VkglTestCase_037657_1 "dEQP-GLES31.functional.draw_buffers_indexed.overwrit"
#define VkglTestCase_037657_2 "e_common.common_blend_func_buffer_separate_blend_func"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037657, VkglTestCase_037657_1, VkglTestCase_037657_2);

#define VkglTestCase_037658_1 "dEQP-GLES31.functional.draw_buffers_indexed.overwrit"
#define VkglTestCase_037658_2 "e_common.common_separate_blend_func_buffer_blend_func"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037658, VkglTestCase_037658_1, VkglTestCase_037658_2);

#define VkglTestCase_037659_1 "dEQP-GLES31.functional.draw_buffers_indexed.overwrite_com"
#define VkglTestCase_037659_2 "mon.common_separate_blend_func_buffer_separate_blend_func"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037659, VkglTestCase_037659_1, VkglTestCase_037659_2);

#define VkglTestCase_037660_1 "dEQP-GLES31.functional.draw_buffers_indexed.over"
#define VkglTestCase_037660_2 "write_common.common_color_mask_buffer_color_mask"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037660, VkglTestCase_037660_1, VkglTestCase_037660_2);
