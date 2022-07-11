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

#define VkglTestCase_044072_1 "dEQP-GLES3.functional.draw.draw_ra"
#define VkglTestCase_044072_2 "nge_elements.lines.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044072, VkglTestCase_044072_1, VkglTestCase_044072_2);

#define VkglTestCase_044073_1 "dEQP-GLES3.functional.draw.draw_rang"
#define VkglTestCase_044073_2 "e_elements.lines.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044073, VkglTestCase_044073_1, VkglTestCase_044073_2);

#define VkglTestCase_044074_1 "dEQP-GLES3.functional.draw.draw_rang"
#define VkglTestCase_044074_2 "e_elements.lines.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044074, VkglTestCase_044074_1, VkglTestCase_044074_2);

#define VkglTestCase_044075_1 "dEQP-GLES3.functional.draw.draw_ran"
#define VkglTestCase_044075_2 "ge_elements.lines.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044075, VkglTestCase_044075_1, VkglTestCase_044075_2);
