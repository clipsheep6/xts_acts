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

#define VkglTestCase_039828_1 "dEQP-GLES3.functional.rasterization.fb"
#define VkglTestCase_039828_2 "o.rbo_singlesample.primitives.triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039828, VkglTestCase_039828_1, VkglTestCase_039828_2);

#define VkglTestCase_039829_1 "dEQP-GLES3.functional.rasterization."
#define VkglTestCase_039829_2 "fbo.rbo_singlesample.primitives.lines"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039829, VkglTestCase_039829_1, VkglTestCase_039829_2);

#define VkglTestCase_039830_1 "dEQP-GLES3.functional.rasterization.fbo"
#define VkglTestCase_039830_2 ".rbo_singlesample.primitives.lines_wide"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039830, VkglTestCase_039830_1, VkglTestCase_039830_2);

#define VkglTestCase_039831_1 "dEQP-GLES3.functional.rasterization.f"
#define VkglTestCase_039831_2 "bo.rbo_singlesample.primitives.points"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039831, VkglTestCase_039831_1, VkglTestCase_039831_2);
