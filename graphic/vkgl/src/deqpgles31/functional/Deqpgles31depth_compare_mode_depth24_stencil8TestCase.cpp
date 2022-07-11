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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310015TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_014797_1 "dEQP-GLES31.functional.texture.border_clamp.dept"
#define VkglTestCase_014797_2 "h_compare_mode.depth24_stencil8.nearest_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014797, VkglTestCase_014797_1, VkglTestCase_014797_2);

#define VkglTestCase_014798_1 "dEQP-GLES31.functional.texture.border_clamp.dept"
#define VkglTestCase_014798_2 "h_compare_mode.depth24_stencil8.nearest_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014798, VkglTestCase_014798_1, VkglTestCase_014798_2);

#define VkglTestCase_014799_1 "dEQP-GLES31.functional.texture.border_clamp.dep"
#define VkglTestCase_014799_2 "th_compare_mode.depth24_stencil8.linear_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014799, VkglTestCase_014799_1, VkglTestCase_014799_2);

#define VkglTestCase_014800_1 "dEQP-GLES31.functional.texture.border_clamp.dept"
#define VkglTestCase_014800_2 "h_compare_mode.depth24_stencil8.linear_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014800, VkglTestCase_014800_1, VkglTestCase_014800_2);

#define VkglTestCase_014801_1 "dEQP-GLES31.functional.texture.border_clamp.dep"
#define VkglTestCase_014801_2 "th_compare_mode.depth24_stencil8.gather_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014801, VkglTestCase_014801_1, VkglTestCase_014801_2);

#define VkglTestCase_014802_1 "dEQP-GLES31.functional.texture.border_clamp.dept"
#define VkglTestCase_014802_2 "h_compare_mode.depth24_stencil8.gather_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014802, VkglTestCase_014802_1, VkglTestCase_014802_2);
