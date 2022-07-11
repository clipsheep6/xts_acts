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

#define VkglTestCase_013394_1 "dEQP-GLES2.functional.vertex_arrays.multiple_"
#define VkglTestCase_013394_2 "attributes.storage.3_user_ptr_user_ptr_buffer"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013394, VkglTestCase_013394_1, VkglTestCase_013394_2);

#define VkglTestCase_013395_1 "dEQP-GLES2.functional.vertex_arrays.multiple_"
#define VkglTestCase_013395_2 "attributes.storage.3_user_ptr_buffer_user_ptr"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013395, VkglTestCase_013395_1, VkglTestCase_013395_2);

#define VkglTestCase_013396_1 "dEQP-GLES2.functional.vertex_arrays.multiple"
#define VkglTestCase_013396_2 "_attributes.storage.3_user_ptr_buffer_buffer"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013396, VkglTestCase_013396_1, VkglTestCase_013396_2);

#define VkglTestCase_013397_1 "dEQP-GLES2.functional.vertex_arrays.multiple_"
#define VkglTestCase_013397_2 "attributes.storage.3_buffer_user_ptr_user_ptr"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013397, VkglTestCase_013397_1, VkglTestCase_013397_2);

#define VkglTestCase_013398_1 "dEQP-GLES2.functional.vertex_arrays.multiple"
#define VkglTestCase_013398_2 "_attributes.storage.3_buffer_user_ptr_buffer"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013398, VkglTestCase_013398_1, VkglTestCase_013398_2);

#define VkglTestCase_013399_1 "dEQP-GLES2.functional.vertex_arrays.multiple"
#define VkglTestCase_013399_2 "_attributes.storage.3_buffer_buffer_user_ptr"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013399, VkglTestCase_013399_1, VkglTestCase_013399_2);

#define VkglTestCase_013400_1 "dEQP-GLES2.functional.vertex_arrays.multipl"
#define VkglTestCase_013400_2 "e_attributes.storage.3_buffer_buffer_buffer"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013400, VkglTestCase_013400_1, VkglTestCase_013400_2);
