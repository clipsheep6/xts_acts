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
#include "../ActsDeqpgles30040TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_039766_1 "dEQP-GLES3.functional.raster"
#define VkglTestCase_039766_2 "ization.fill_rules.basic_quad"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039766, VkglTestCase_039766_1, VkglTestCase_039766_2);

#define VkglTestCase_039767_1 "dEQP-GLES3.functional.rasterizat"
#define VkglTestCase_039767_2 "ion.fill_rules.basic_quad_reverse"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039767, VkglTestCase_039767_1, VkglTestCase_039767_2);

#define VkglTestCase_039768_1 "dEQP-GLES3.functional.rasteri"
#define VkglTestCase_039768_2 "zation.fill_rules.clipped_full"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039768, VkglTestCase_039768_1, VkglTestCase_039768_2);

#define VkglTestCase_039769_1 "dEQP-GLES3.functional.rasteriz"
#define VkglTestCase_039769_2 "ation.fill_rules.clipped_partly"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039769, VkglTestCase_039769_1, VkglTestCase_039769_2);

#define VkglTestCase_039770_1 "dEQP-GLES3.functional.raster"
#define VkglTestCase_039770_2 "ization.fill_rules.projected"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039770, VkglTestCase_039770_1, VkglTestCase_039770_2);
