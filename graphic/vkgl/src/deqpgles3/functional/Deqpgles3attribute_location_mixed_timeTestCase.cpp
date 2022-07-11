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
#include "../ActsDeqpgles30039TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_038643_1 "dEQP-GLES3.functional.attribute"
#define VkglTestCase_038643_2 "_location.mixed_time.pre_attach"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038643, VkglTestCase_038643_1, VkglTestCase_038643_2);

#define VkglTestCase_038644_1 "dEQP-GLES3.functional.attribut"
#define VkglTestCase_038644_2 "e_location.mixed_time.pre_link"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038644, VkglTestCase_038644_1, VkglTestCase_038644_2);

#define VkglTestCase_038645_1 "dEQP-GLES3.functional.attribut"
#define VkglTestCase_038645_2 "e_location.mixed_time.post_link"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038645, VkglTestCase_038645_1, VkglTestCase_038645_2);

#define VkglTestCase_038646_1 "dEQP-GLES3.functional.attribu"
#define VkglTestCase_038646_2 "te_location.mixed_time.relink"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038646, VkglTestCase_038646_1, VkglTestCase_038646_2);

#define VkglTestCase_038647_1 "dEQP-GLES3.functional.attribut"
#define VkglTestCase_038647_2 "e_location.mixed_time.reattach"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038647, VkglTestCase_038647_1, VkglTestCase_038647_2);
