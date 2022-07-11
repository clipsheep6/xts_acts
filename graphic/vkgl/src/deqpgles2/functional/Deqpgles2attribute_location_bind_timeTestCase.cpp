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

#define VkglTestCase_013964_1 "dEQP-GLES2.functional.attribut"
#define VkglTestCase_013964_2 "e_location.bind_time.pre_attach"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013964, VkglTestCase_013964_1, VkglTestCase_013964_2);

#define VkglTestCase_013965_1 "dEQP-GLES2.functional.attribu"
#define VkglTestCase_013965_2 "te_location.bind_time.pre_link"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013965, VkglTestCase_013965_1, VkglTestCase_013965_2);

#define VkglTestCase_013966_1 "dEQP-GLES2.functional.attribut"
#define VkglTestCase_013966_2 "e_location.bind_time.post_link"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013966, VkglTestCase_013966_1, VkglTestCase_013966_2);

#define VkglTestCase_013967_1 "dEQP-GLES2.functional.attrib"
#define VkglTestCase_013967_2 "ute_location.bind_time.relink"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013967, VkglTestCase_013967_1, VkglTestCase_013967_2);

#define VkglTestCase_013968_1 "dEQP-GLES2.functional.attribu"
#define VkglTestCase_013968_2 "te_location.bind_time.reattach"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013968, VkglTestCase_013968_1, VkglTestCase_013968_2);
