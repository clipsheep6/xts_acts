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
#include "../ActsDeqpgles310025TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_024965_1 "dEQP-GLES31.functional.primitive_bo"
#define VkglTestCase_024965_2 "unding_box.state_query.initial_value"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024965, VkglTestCase_024965_1, VkglTestCase_024965_2);

#define VkglTestCase_024966_1 "dEQP-GLES31.functional.primitive_"
#define VkglTestCase_024966_2 "bounding_box.state_query.getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024966, VkglTestCase_024966_1, VkglTestCase_024966_2);

#define VkglTestCase_024967_1 "dEQP-GLES31.functional.primitive_b"
#define VkglTestCase_024967_2 "ounding_box.state_query.getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024967, VkglTestCase_024967_1, VkglTestCase_024967_2);

#define VkglTestCase_024968_1 "dEQP-GLES31.functional.primitive_b"
#define VkglTestCase_024968_2 "ounding_box.state_query.getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024968, VkglTestCase_024968_1, VkglTestCase_024968_2);

#define VkglTestCase_024969_1 "dEQP-GLES31.functional.primitive_bo"
#define VkglTestCase_024969_2 "unding_box.state_query.getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024969, VkglTestCase_024969_1, VkglTestCase_024969_2);
