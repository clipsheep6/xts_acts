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
#include "../ActsDeqpgles310017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016484_1 "dEQP-GLES31.functional.sample_shading"
#define VkglTestCase_016484_2 ".state_query.sample_shading_is_enabled"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016484, VkglTestCase_016484_1, VkglTestCase_016484_2);

#define VkglTestCase_016485_1 "dEQP-GLES31.functional.sample_shading."
#define VkglTestCase_016485_2 "state_query.sample_shading_get_boolean"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016485, VkglTestCase_016485_1, VkglTestCase_016485_2);

#define VkglTestCase_016486_1 "dEQP-GLES31.functional.sample_shading."
#define VkglTestCase_016486_2 "state_query.sample_shading_get_integer"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016486, VkglTestCase_016486_1, VkglTestCase_016486_2);

#define VkglTestCase_016487_1 "dEQP-GLES31.functional.sample_shading"
#define VkglTestCase_016487_2 ".state_query.sample_shading_get_float"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016487, VkglTestCase_016487_1, VkglTestCase_016487_2);

#define VkglTestCase_016488_1 "dEQP-GLES31.functional.sample_shading.s"
#define VkglTestCase_016488_2 "tate_query.sample_shading_get_integer64"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016488, VkglTestCase_016488_1, VkglTestCase_016488_2);

#define VkglTestCase_016489_1 "dEQP-GLES31.functional.sample_shading.state"
#define VkglTestCase_016489_2 "_query.min_sample_shading_value_get_boolean"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016489, VkglTestCase_016489_1, VkglTestCase_016489_2);

#define VkglTestCase_016490_1 "dEQP-GLES31.functional.sample_shading.state"
#define VkglTestCase_016490_2 "_query.min_sample_shading_value_get_integer"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016490, VkglTestCase_016490_1, VkglTestCase_016490_2);

#define VkglTestCase_016491_1 "dEQP-GLES31.functional.sample_shading.stat"
#define VkglTestCase_016491_2 "e_query.min_sample_shading_value_get_float"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016491, VkglTestCase_016491_1, VkglTestCase_016491_2);

#define VkglTestCase_016492_1 "dEQP-GLES31.functional.sample_shading.state_"
#define VkglTestCase_016492_2 "query.min_sample_shading_value_get_integer64"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016492, VkglTestCase_016492_1, VkglTestCase_016492_2);

#define VkglTestCase_016493_1 "dEQP-GLES31.functional.sample_shading.sta"
#define VkglTestCase_016493_2 "te_query.min_sample_shading_value_clamping"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016493, VkglTestCase_016493_1, VkglTestCase_016493_2);
