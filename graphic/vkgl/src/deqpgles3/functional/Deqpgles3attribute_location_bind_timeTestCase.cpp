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

#define VkglTestCase_038518_1 "dEQP-GLES3.functional.attribut"
#define VkglTestCase_038518_2 "e_location.bind_time.pre_attach"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038518, VkglTestCase_038518_1, VkglTestCase_038518_2);

#define VkglTestCase_038519_1 "dEQP-GLES3.functional.attribu"
#define VkglTestCase_038519_2 "te_location.bind_time.pre_link"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038519, VkglTestCase_038519_1, VkglTestCase_038519_2);

#define VkglTestCase_038520_1 "dEQP-GLES3.functional.attribut"
#define VkglTestCase_038520_2 "e_location.bind_time.post_link"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038520, VkglTestCase_038520_1, VkglTestCase_038520_2);

#define VkglTestCase_038521_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038521_2 "ute_location.bind_time.relink"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038521, VkglTestCase_038521_1, VkglTestCase_038521_2);

#define VkglTestCase_038522_1 "dEQP-GLES3.functional.attribu"
#define VkglTestCase_038522_2 "te_location.bind_time.reattach"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038522, VkglTestCase_038522_1, VkglTestCase_038522_2);
