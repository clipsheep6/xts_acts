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

#define VkglTestCase_044017_1 "dEQP-GLES3.functional.draw.draw_array"
#define VkglTestCase_044017_2 "s_instanced.line_loop.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044017, VkglTestCase_044017_1, VkglTestCase_044017_2);

#define VkglTestCase_044018_1 "dEQP-GLES3.functional.draw.draw_arrays_"
#define VkglTestCase_044018_2 "instanced.line_loop.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044018, VkglTestCase_044018_1, VkglTestCase_044018_2);

#define VkglTestCase_044019_1 "dEQP-GLES3.functional.draw.draw_arrays_"
#define VkglTestCase_044019_2 "instanced.line_loop.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044019, VkglTestCase_044019_1, VkglTestCase_044019_2);

#define VkglTestCase_044020_1 "dEQP-GLES3.functional.draw.draw_arrays"
#define VkglTestCase_044020_2 "_instanced.line_loop.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044020, VkglTestCase_044020_1, VkglTestCase_044020_2);
