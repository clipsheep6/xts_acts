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

#define VkglTestCase_039852_1 "dEQP-GLES3.functional.rasterization.fbo."
#define VkglTestCase_039852_2 "rbo_multisample_max.primitives.triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039852, VkglTestCase_039852_1, VkglTestCase_039852_2);

#define VkglTestCase_039853_1 "dEQP-GLES3.functional.rasterization.fb"
#define VkglTestCase_039853_2 "o.rbo_multisample_max.primitives.lines"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039853, VkglTestCase_039853_1, VkglTestCase_039853_2);

#define VkglTestCase_039854_1 "dEQP-GLES3.functional.rasterization.fbo."
#define VkglTestCase_039854_2 "rbo_multisample_max.primitives.lines_wide"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039854, VkglTestCase_039854_1, VkglTestCase_039854_2);

#define VkglTestCase_039855_1 "dEQP-GLES3.functional.rasterization.fb"
#define VkglTestCase_039855_2 "o.rbo_multisample_max.primitives.points"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039855, VkglTestCase_039855_1, VkglTestCase_039855_2);
