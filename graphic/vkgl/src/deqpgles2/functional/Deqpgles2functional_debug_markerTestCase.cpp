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
#include "../ActsDeqpgles20017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016490_1 "dEQP-GLES2.functional."
#define VkglTestCase_016490_2 "debug_marker.supported"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016490, VkglTestCase_016490_1, VkglTestCase_016490_2);

#define VkglTestCase_016491_1 "dEQP-GLES2.functiona"
#define VkglTestCase_016491_2 "l.debug_marker.random"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016491, VkglTestCase_016491_1, VkglTestCase_016491_2);

#define VkglTestCase_016492_1 "dEQP-GLES2.functional"
#define VkglTestCase_016492_2 ".debug_marker.invalid"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016492, VkglTestCase_016492_1, VkglTestCase_016492_2);
