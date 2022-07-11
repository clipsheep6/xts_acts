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

#define VkglTestCase_013885_1 "dEQP-GLES2.functional.raster"
#define VkglTestCase_013885_2 "ization.fill_rules.basic_quad"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013885, VkglTestCase_013885_1, VkglTestCase_013885_2);

#define VkglTestCase_013886_1 "dEQP-GLES2.functional.rasterizat"
#define VkglTestCase_013886_2 "ion.fill_rules.basic_quad_reverse"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013886, VkglTestCase_013886_1, VkglTestCase_013886_2);

#define VkglTestCase_013887_1 "dEQP-GLES2.functional.rasteri"
#define VkglTestCase_013887_2 "zation.fill_rules.clipped_full"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013887, VkglTestCase_013887_1, VkglTestCase_013887_2);

#define VkglTestCase_013888_1 "dEQP-GLES2.functional.rasteriz"
#define VkglTestCase_013888_2 "ation.fill_rules.clipped_partly"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013888, VkglTestCase_013888_1, VkglTestCase_013888_2);

#define VkglTestCase_013889_1 "dEQP-GLES2.functional.raster"
#define VkglTestCase_013889_2 "ization.fill_rules.projected"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013889, VkglTestCase_013889_1, VkglTestCase_013889_2);
