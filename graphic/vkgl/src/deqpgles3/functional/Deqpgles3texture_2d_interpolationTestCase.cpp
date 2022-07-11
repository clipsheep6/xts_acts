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

#define VkglTestCase_039825_1 "dEQP-GLES3.functional.rasterization.f"
#define VkglTestCase_039825_2 "bo.texture_2d.interpolation.triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039825, VkglTestCase_039825_1, VkglTestCase_039825_2);

#define VkglTestCase_039826_1 "dEQP-GLES3.functional.rasterization"
#define VkglTestCase_039826_2 ".fbo.texture_2d.interpolation.lines"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039826, VkglTestCase_039826_1, VkglTestCase_039826_2);

#define VkglTestCase_039827_1 "dEQP-GLES3.functional.rasterization.f"
#define VkglTestCase_039827_2 "bo.texture_2d.interpolation.lines_wide"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039827, VkglTestCase_039827_1, VkglTestCase_039827_2);
