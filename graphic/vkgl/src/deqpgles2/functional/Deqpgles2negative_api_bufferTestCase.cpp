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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20014TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_013628_1 "dEQP-GLES2.functional.nega"
#define VkglTestCase_013628_2 "tive_api.buffer.bind_buffer"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013628, VkglTestCase_013628_1, VkglTestCase_013628_2);

#define VkglTestCase_013629_1 "dEQP-GLES2.functional.negati"
#define VkglTestCase_013629_2 "ve_api.buffer.delete_buffers"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013629, VkglTestCase_013629_1, VkglTestCase_013629_2);

#define VkglTestCase_013630_1 "dEQP-GLES2.functional.nega"
#define VkglTestCase_013630_2 "tive_api.buffer.gen_buffers"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013630, VkglTestCase_013630_1, VkglTestCase_013630_2);

#define VkglTestCase_013631_1 "dEQP-GLES2.functional.nega"
#define VkglTestCase_013631_2 "tive_api.buffer.buffer_data"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013631, VkglTestCase_013631_1, VkglTestCase_013631_2);

#define VkglTestCase_013632_1 "dEQP-GLES2.functional.negati"
#define VkglTestCase_013632_2 "ve_api.buffer.buffer_sub_data"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013632, VkglTestCase_013632_1, VkglTestCase_013632_2);

#define VkglTestCase_013633_1 "dEQP-GLES2.functional.negative_api"
#define VkglTestCase_013633_2 ".buffer.buffer_sub_data_size_offset"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013633, VkglTestCase_013633_1, VkglTestCase_013633_2);

#define VkglTestCase_013634_1 "dEQP-GLES2.functional.n"
#define VkglTestCase_013634_2 "egative_api.buffer.clear"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013634, VkglTestCase_013634_1, VkglTestCase_013634_2);

#define VkglTestCase_013635_1 "dEQP-GLES2.functional.nega"
#define VkglTestCase_013635_2 "tive_api.buffer.read_pixels"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013635, VkglTestCase_013635_1, VkglTestCase_013635_2);

#define VkglTestCase_013636_1 "dEQP-GLES2.functional.negative_api"
#define VkglTestCase_013636_2 ".buffer.read_pixels_format_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013636, VkglTestCase_013636_1, VkglTestCase_013636_2);

#define VkglTestCase_013637_1 "dEQP-GLES2.functional.negativ"
#define VkglTestCase_013637_2 "e_api.buffer.bind_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013637, VkglTestCase_013637_1, VkglTestCase_013637_2);

#define VkglTestCase_013638_1 "dEQP-GLES2.functional.negativ"
#define VkglTestCase_013638_2 "e_api.buffer.bind_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013638, VkglTestCase_013638_1, VkglTestCase_013638_2);

#define VkglTestCase_013639_1 "dEQP-GLES2.functional.negative_ap"
#define VkglTestCase_013639_2 "i.buffer.check_framebuffer_status"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013639, VkglTestCase_013639_1, VkglTestCase_013639_2);

#define VkglTestCase_013640_1 "dEQP-GLES2.functional.negativ"
#define VkglTestCase_013640_2 "e_api.buffer.gen_framebuffers"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013640, VkglTestCase_013640_1, VkglTestCase_013640_2);

#define VkglTestCase_013641_1 "dEQP-GLES2.functional.negativ"
#define VkglTestCase_013641_2 "e_api.buffer.gen_renderbuffers"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013641, VkglTestCase_013641_1, VkglTestCase_013641_2);

#define VkglTestCase_013642_1 "dEQP-GLES2.functional.negative"
#define VkglTestCase_013642_2 "_api.buffer.delete_framebuffers"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013642, VkglTestCase_013642_1, VkglTestCase_013642_2);

#define VkglTestCase_013643_1 "dEQP-GLES2.functional.negative_"
#define VkglTestCase_013643_2 "api.buffer.delete_renderbuffers"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013643, VkglTestCase_013643_1, VkglTestCase_013643_2);

#define VkglTestCase_013644_1 "dEQP-GLES2.functional.negative_ap"
#define VkglTestCase_013644_2 "i.buffer.framebuffer_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013644, VkglTestCase_013644_1, VkglTestCase_013644_2);

#define VkglTestCase_013645_1 "dEQP-GLES2.functional.negative_"
#define VkglTestCase_013645_2 "api.buffer.framebuffer_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013645, VkglTestCase_013645_1, VkglTestCase_013645_2);

#define VkglTestCase_013646_1 "dEQP-GLES2.functional.negative_"
#define VkglTestCase_013646_2 "api.buffer.renderbuffer_storage"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013646, VkglTestCase_013646_1, VkglTestCase_013646_2);
