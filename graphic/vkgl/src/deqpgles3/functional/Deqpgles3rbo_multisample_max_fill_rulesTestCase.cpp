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

#define VkglTestCase_039856_1 "dEQP-GLES3.functional.rasterization.fbo."
#define VkglTestCase_039856_2 "rbo_multisample_max.fill_rules.basic_quad"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039856, VkglTestCase_039856_1, VkglTestCase_039856_2);

#define VkglTestCase_039857_1 "dEQP-GLES3.functional.rasterization.fbo.rbo_"
#define VkglTestCase_039857_2 "multisample_max.fill_rules.basic_quad_reverse"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039857, VkglTestCase_039857_1, VkglTestCase_039857_2);

#define VkglTestCase_039858_1 "dEQP-GLES3.functional.rasterization.fbo.r"
#define VkglTestCase_039858_2 "bo_multisample_max.fill_rules.clipped_full"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039858, VkglTestCase_039858_1, VkglTestCase_039858_2);

#define VkglTestCase_039859_1 "dEQP-GLES3.functional.rasterization.fbo.rb"
#define VkglTestCase_039859_2 "o_multisample_max.fill_rules.clipped_partly"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039859, VkglTestCase_039859_1, VkglTestCase_039859_2);

#define VkglTestCase_039860_1 "dEQP-GLES3.functional.rasterization.fbo."
#define VkglTestCase_039860_2 "rbo_multisample_max.fill_rules.projected"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039860, VkglTestCase_039860_1, VkglTestCase_039860_2);
