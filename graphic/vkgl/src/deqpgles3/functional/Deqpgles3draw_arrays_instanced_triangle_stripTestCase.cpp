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
#include "../ActsDeqpgles30045TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_044005_1 "dEQP-GLES3.functional.draw.draw_arrays_i"
#define VkglTestCase_044005_2 "nstanced.triangle_strip.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044005, VkglTestCase_044005_1, VkglTestCase_044005_2);

#define VkglTestCase_044006_1 "dEQP-GLES3.functional.draw.draw_arrays_in"
#define VkglTestCase_044006_2 "stanced.triangle_strip.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044006, VkglTestCase_044006_1, VkglTestCase_044006_2);

#define VkglTestCase_044007_1 "dEQP-GLES3.functional.draw.draw_arrays_ins"
#define VkglTestCase_044007_2 "tanced.triangle_strip.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044007, VkglTestCase_044007_1, VkglTestCase_044007_2);

#define VkglTestCase_044008_1 "dEQP-GLES3.functional.draw.draw_arrays_i"
#define VkglTestCase_044008_2 "nstanced.triangle_strip.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044008, VkglTestCase_044008_1, VkglTestCase_044008_2);
