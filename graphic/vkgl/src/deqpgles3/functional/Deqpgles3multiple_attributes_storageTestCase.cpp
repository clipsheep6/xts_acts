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
#include "../ActsDeqpgles30034TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_033688_1 "dEQP-GLES3.functional.vertex_arrays.multiple_"
#define VkglTestCase_033688_2 "attributes.storage.3_user_ptr_user_ptr_buffer"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033688, VkglTestCase_033688_1, VkglTestCase_033688_2);

#define VkglTestCase_033689_1 "dEQP-GLES3.functional.vertex_arrays.multiple_"
#define VkglTestCase_033689_2 "attributes.storage.3_user_ptr_buffer_user_ptr"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033689, VkglTestCase_033689_1, VkglTestCase_033689_2);

#define VkglTestCase_033690_1 "dEQP-GLES3.functional.vertex_arrays.multiple"
#define VkglTestCase_033690_2 "_attributes.storage.3_user_ptr_buffer_buffer"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033690, VkglTestCase_033690_1, VkglTestCase_033690_2);

#define VkglTestCase_033691_1 "dEQP-GLES3.functional.vertex_arrays.multiple_"
#define VkglTestCase_033691_2 "attributes.storage.3_buffer_user_ptr_user_ptr"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033691, VkglTestCase_033691_1, VkglTestCase_033691_2);

#define VkglTestCase_033692_1 "dEQP-GLES3.functional.vertex_arrays.multiple"
#define VkglTestCase_033692_2 "_attributes.storage.3_buffer_user_ptr_buffer"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033692, VkglTestCase_033692_1, VkglTestCase_033692_2);

#define VkglTestCase_033693_1 "dEQP-GLES3.functional.vertex_arrays.multiple"
#define VkglTestCase_033693_2 "_attributes.storage.3_buffer_buffer_user_ptr"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033693, VkglTestCase_033693_1, VkglTestCase_033693_2);

#define VkglTestCase_033694_1 "dEQP-GLES3.functional.vertex_arrays.multipl"
#define VkglTestCase_033694_2 "e_attributes.storage.3_buffer_buffer_buffer"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033694, VkglTestCase_033694_1, VkglTestCase_033694_2);
