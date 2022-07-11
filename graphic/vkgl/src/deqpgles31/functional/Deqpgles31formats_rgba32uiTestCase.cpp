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

#define VkglTestCase_014485_1 "dEQP-GLES31.functional.texture.border_"
#define VkglTestCase_014485_2 "clamp.formats.rgba32ui.nearest_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014485, VkglTestCase_014485_1, VkglTestCase_014485_2);

#define VkglTestCase_014486_1 "dEQP-GLES31.functional.texture.border_c"
#define VkglTestCase_014486_2 "lamp.formats.rgba32ui.nearest_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014486, VkglTestCase_014486_1, VkglTestCase_014486_2);

#define VkglTestCase_014487_1 "dEQP-GLES31.functional.texture.border_"
#define VkglTestCase_014487_2 "clamp.formats.rgba32ui.gather_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014487, VkglTestCase_014487_1, VkglTestCase_014487_2);

#define VkglTestCase_014488_1 "dEQP-GLES31.functional.texture.border_"
#define VkglTestCase_014488_2 "clamp.formats.rgba32ui.gather_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014488, VkglTestCase_014488_1, VkglTestCase_014488_2);
