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

#define VkglTestCase_014469_1 "dEQP-GLES31.functional.texture.border_"
#define VkglTestCase_014469_2 "clamp.formats.rgba8ui.nearest_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014469, VkglTestCase_014469_1, VkglTestCase_014469_2);

#define VkglTestCase_014470_1 "dEQP-GLES31.functional.texture.border_"
#define VkglTestCase_014470_2 "clamp.formats.rgba8ui.nearest_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014470, VkglTestCase_014470_1, VkglTestCase_014470_2);

#define VkglTestCase_014471_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014471_2 "_clamp.formats.rgba8ui.gather_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014471, VkglTestCase_014471_1, VkglTestCase_014471_2);

#define VkglTestCase_014472_1 "dEQP-GLES31.functional.texture.border_"
#define VkglTestCase_014472_2 "clamp.formats.rgba8ui.gather_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014472, VkglTestCase_014472_1, VkglTestCase_014472_2);
