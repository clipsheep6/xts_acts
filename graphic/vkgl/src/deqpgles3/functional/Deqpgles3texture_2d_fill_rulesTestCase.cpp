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

#define VkglTestCase_039820_1 "dEQP-GLES3.functional.rasterization."
#define VkglTestCase_039820_2 "fbo.texture_2d.fill_rules.basic_quad"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039820, VkglTestCase_039820_1, VkglTestCase_039820_2);

#define VkglTestCase_039821_1 "dEQP-GLES3.functional.rasterization.fbo."
#define VkglTestCase_039821_2 "texture_2d.fill_rules.basic_quad_reverse"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039821, VkglTestCase_039821_1, VkglTestCase_039821_2);

#define VkglTestCase_039822_1 "dEQP-GLES3.functional.rasterization.f"
#define VkglTestCase_039822_2 "bo.texture_2d.fill_rules.clipped_full"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039822, VkglTestCase_039822_1, VkglTestCase_039822_2);

#define VkglTestCase_039823_1 "dEQP-GLES3.functional.rasterization.fb"
#define VkglTestCase_039823_2 "o.texture_2d.fill_rules.clipped_partly"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039823, VkglTestCase_039823_1, VkglTestCase_039823_2);

#define VkglTestCase_039824_1 "dEQP-GLES3.functional.rasterization"
#define VkglTestCase_039824_2 ".fbo.texture_2d.fill_rules.projected"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039824, VkglTestCase_039824_1, VkglTestCase_039824_2);
