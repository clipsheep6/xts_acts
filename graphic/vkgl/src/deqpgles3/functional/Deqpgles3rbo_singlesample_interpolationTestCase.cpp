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

#define VkglTestCase_039837_1 "dEQP-GLES3.functional.rasterization.fbo."
#define VkglTestCase_039837_2 "rbo_singlesample.interpolation.triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039837, VkglTestCase_039837_1, VkglTestCase_039837_2);

#define VkglTestCase_039838_1 "dEQP-GLES3.functional.rasterization.fb"
#define VkglTestCase_039838_2 "o.rbo_singlesample.interpolation.lines"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039838, VkglTestCase_039838_1, VkglTestCase_039838_2);

#define VkglTestCase_039839_1 "dEQP-GLES3.functional.rasterization.fbo."
#define VkglTestCase_039839_2 "rbo_singlesample.interpolation.lines_wide"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039839, VkglTestCase_039839_1, VkglTestCase_039839_2);
