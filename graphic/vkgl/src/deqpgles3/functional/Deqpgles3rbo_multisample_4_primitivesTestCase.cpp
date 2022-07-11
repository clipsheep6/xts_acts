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

#define VkglTestCase_039840_1 "dEQP-GLES3.functional.rasterization.fbo"
#define VkglTestCase_039840_2 ".rbo_multisample_4.primitives.triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039840, VkglTestCase_039840_1, VkglTestCase_039840_2);

#define VkglTestCase_039841_1 "dEQP-GLES3.functional.rasterization.f"
#define VkglTestCase_039841_2 "bo.rbo_multisample_4.primitives.lines"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039841, VkglTestCase_039841_1, VkglTestCase_039841_2);

#define VkglTestCase_039842_1 "dEQP-GLES3.functional.rasterization.fbo"
#define VkglTestCase_039842_2 ".rbo_multisample_4.primitives.lines_wide"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039842, VkglTestCase_039842_1, VkglTestCase_039842_2);

#define VkglTestCase_039843_1 "dEQP-GLES3.functional.rasterization.f"
#define VkglTestCase_039843_2 "bo.rbo_multisample_4.primitives.points"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039843, VkglTestCase_039843_1, VkglTestCase_039843_2);
