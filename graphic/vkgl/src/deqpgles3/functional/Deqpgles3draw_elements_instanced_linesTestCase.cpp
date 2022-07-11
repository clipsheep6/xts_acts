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
#include "../ActsDeqpgles30045TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_044044_1 "dEQP-GLES3.functional.draw.draw_elem"
#define VkglTestCase_044044_2 "ents_instanced.lines.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044044, VkglTestCase_044044_1, VkglTestCase_044044_2);

#define VkglTestCase_044045_1 "dEQP-GLES3.functional.draw.draw_elemen"
#define VkglTestCase_044045_2 "ts_instanced.lines.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044045, VkglTestCase_044045_1, VkglTestCase_044045_2);

#define VkglTestCase_044046_1 "dEQP-GLES3.functional.draw.draw_elemen"
#define VkglTestCase_044046_2 "ts_instanced.lines.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044046, VkglTestCase_044046_1, VkglTestCase_044046_2);

#define VkglTestCase_044047_1 "dEQP-GLES3.functional.draw.draw_eleme"
#define VkglTestCase_044047_2 "nts_instanced.lines.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044047, VkglTestCase_044047_1, VkglTestCase_044047_2);
