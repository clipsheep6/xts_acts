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
#include "../ActsDeqpgles30040TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_039926_1 "dEQP-GLES3.functional.verte"
#define VkglTestCase_039926_2 "x_array_objects.diff_buffer"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039926, VkglTestCase_039926_1, VkglTestCase_039926_2);

#define VkglTestCase_039927_1 "dEQP-GLES3.functional.vert"
#define VkglTestCase_039927_2 "ex_array_objects.diff_size"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039927, VkglTestCase_039927_1, VkglTestCase_039927_2);

#define VkglTestCase_039928_1 "dEQP-GLES3.functional.verte"
#define VkglTestCase_039928_2 "x_array_objects.diff_stride"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039928, VkglTestCase_039928_1, VkglTestCase_039928_2);

#define VkglTestCase_039929_1 "dEQP-GLES3.functional.vert"
#define VkglTestCase_039929_2 "ex_array_objects.diff_type"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039929, VkglTestCase_039929_1, VkglTestCase_039929_2);

#define VkglTestCase_039930_1 "dEQP-GLES3.functional.verte"
#define VkglTestCase_039930_2 "x_array_objects.diff_integer"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039930, VkglTestCase_039930_1, VkglTestCase_039930_2);

#define VkglTestCase_039931_1 "dEQP-GLES3.functional.verte"
#define VkglTestCase_039931_2 "x_array_objects.diff_divisor"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039931, VkglTestCase_039931_1, VkglTestCase_039931_2);

#define VkglTestCase_039932_1 "dEQP-GLES3.functional.verte"
#define VkglTestCase_039932_2 "x_array_objects.diff_offset"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039932, VkglTestCase_039932_1, VkglTestCase_039932_2);

#define VkglTestCase_039933_1 "dEQP-GLES3.functional.vertex"
#define VkglTestCase_039933_2 "_array_objects.diff_normalize"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039933, VkglTestCase_039933_1, VkglTestCase_039933_2);

#define VkglTestCase_039934_1 "dEQP-GLES3.functional.verte"
#define VkglTestCase_039934_2 "x_array_objects.diff_indices"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039934, VkglTestCase_039934_1, VkglTestCase_039934_2);

#define VkglTestCase_039935_1 "dEQP-GLES3.functional.vertex"
#define VkglTestCase_039935_2 "_array_objects.all_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039935, VkglTestCase_039935_1, VkglTestCase_039935_2);
