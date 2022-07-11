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

#define VkglTestCase_039861_1 "dEQP-GLES3.functional.rasterization.fbo.r"
#define VkglTestCase_039861_2 "bo_multisample_max.interpolation.triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039861, VkglTestCase_039861_1, VkglTestCase_039861_2);

#define VkglTestCase_039862_1 "dEQP-GLES3.functional.rasterization.fbo"
#define VkglTestCase_039862_2 ".rbo_multisample_max.interpolation.lines"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039862, VkglTestCase_039862_1, VkglTestCase_039862_2);

#define VkglTestCase_039863_1 "dEQP-GLES3.functional.rasterization.fbo.rb"
#define VkglTestCase_039863_2 "o_multisample_max.interpolation.lines_wide"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039863, VkglTestCase_039863_1, VkglTestCase_039863_2);
