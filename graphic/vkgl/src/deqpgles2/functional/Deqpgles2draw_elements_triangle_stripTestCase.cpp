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

#define VkglTestCase_016349_1 "dEQP-GLES2.functional.draw.draw_elem"
#define VkglTestCase_016349_2 "ents.triangle_strip.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016349, VkglTestCase_016349_1, VkglTestCase_016349_2);

#define VkglTestCase_016350_1 "dEQP-GLES2.functional.draw.draw_eleme"
#define VkglTestCase_016350_2 "nts.triangle_strip.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016350, VkglTestCase_016350_1, VkglTestCase_016350_2);

#define VkglTestCase_016351_1 "dEQP-GLES2.functional.draw.draw_elem"
#define VkglTestCase_016351_2 "ents.triangle_strip.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016351, VkglTestCase_016351_1, VkglTestCase_016351_2);
