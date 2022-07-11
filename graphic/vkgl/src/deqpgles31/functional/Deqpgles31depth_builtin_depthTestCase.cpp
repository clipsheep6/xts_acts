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
#include "../ActsDeqpgles310026TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_025170_1 "dEQP-GLES31.functional.primitive_bounding_bo"
#define VkglTestCase_025170_2 "x.depth.builtin_depth.global_state_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025170, VkglTestCase_025170_1, VkglTestCase_025170_2);

#define VkglTestCase_025171_1 "dEQP-GLES31.functional.primitive_bounding_box"
#define VkglTestCase_025171_2 ".depth.builtin_depth.global_state_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025171, VkglTestCase_025171_1, VkglTestCase_025171_2);

#define VkglTestCase_025172_1 "dEQP-GLES31.functional.primitive_bounding_box"
#define VkglTestCase_025172_2 ".depth.builtin_depth.per_primitive_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025172, VkglTestCase_025172_1, VkglTestCase_025172_2);

#define VkglTestCase_025173_1 "dEQP-GLES31.functional.primitive_bounding_box"
#define VkglTestCase_025173_2 ".depth.builtin_depth.per_primitive_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025173, VkglTestCase_025173_1, VkglTestCase_025173_2);
