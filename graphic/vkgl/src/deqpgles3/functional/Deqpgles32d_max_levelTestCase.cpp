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
#include "../ActsDeqpgles30026TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_025087_1 "dEQP-GLES3.functional.texture.mi"
#define VkglTestCase_025087_2 "pmap.2d.max_level.nearest_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025087, VkglTestCase_025087_1, VkglTestCase_025087_2);

#define VkglTestCase_025088_1 "dEQP-GLES3.functional.texture.mi"
#define VkglTestCase_025088_2 "pmap.2d.max_level.linear_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025088, VkglTestCase_025088_1, VkglTestCase_025088_2);

#define VkglTestCase_025089_1 "dEQP-GLES3.functional.texture.mi"
#define VkglTestCase_025089_2 "pmap.2d.max_level.nearest_linear"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025089, VkglTestCase_025089_1, VkglTestCase_025089_2);

#define VkglTestCase_025090_1 "dEQP-GLES3.functional.texture.m"
#define VkglTestCase_025090_2 "ipmap.2d.max_level.linear_linear"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025090, VkglTestCase_025090_1, VkglTestCase_025090_2);
