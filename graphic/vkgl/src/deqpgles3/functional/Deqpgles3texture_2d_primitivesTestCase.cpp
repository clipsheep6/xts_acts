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

#define VkglTestCase_039816_1 "dEQP-GLES3.functional.rasterization"
#define VkglTestCase_039816_2 ".fbo.texture_2d.primitives.triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039816, VkglTestCase_039816_1, VkglTestCase_039816_2);

#define VkglTestCase_039817_1 "dEQP-GLES3.functional.rasterizati"
#define VkglTestCase_039817_2 "on.fbo.texture_2d.primitives.lines"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039817, VkglTestCase_039817_1, VkglTestCase_039817_2);

#define VkglTestCase_039818_1 "dEQP-GLES3.functional.rasterization."
#define VkglTestCase_039818_2 "fbo.texture_2d.primitives.lines_wide"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039818, VkglTestCase_039818_1, VkglTestCase_039818_2);

#define VkglTestCase_039819_1 "dEQP-GLES3.functional.rasterizatio"
#define VkglTestCase_039819_2 "n.fbo.texture_2d.primitives.points"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039819, VkglTestCase_039819_1, VkglTestCase_039819_2);
