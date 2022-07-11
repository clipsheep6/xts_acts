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
#include "../ActsDeqpgles20016TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_015658_1 "dEQP-GLES2.functional.state"
#define VkglTestCase_015658_2 "_query.rbo.renderbuffer_size"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015658, VkglTestCase_015658_1, VkglTestCase_015658_2);

#define VkglTestCase_015659_1 "dEQP-GLES2.functional.state_query"
#define VkglTestCase_015659_2 ".rbo.renderbuffer_internal_format"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015659, VkglTestCase_015659_1, VkglTestCase_015659_2);

#define VkglTestCase_015660_1 "dEQP-GLES2.functional.state_query.r"
#define VkglTestCase_015660_2 "bo.renderbuffer_component_size_color"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015660, VkglTestCase_015660_1, VkglTestCase_015660_2);

#define VkglTestCase_015661_1 "dEQP-GLES2.functional.state_query.r"
#define VkglTestCase_015661_2 "bo.renderbuffer_component_size_depth"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015661, VkglTestCase_015661_1, VkglTestCase_015661_2);
