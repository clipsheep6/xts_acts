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

#define VkglTestCase_014289_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014289_2 "_clamp.formats.rgb565.nearest_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014289, VkglTestCase_014289_1, VkglTestCase_014289_2);

#define VkglTestCase_014290_1 "dEQP-GLES31.functional.texture.border_"
#define VkglTestCase_014290_2 "clamp.formats.rgb565.nearest_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014290, VkglTestCase_014290_1, VkglTestCase_014290_2);

#define VkglTestCase_014291_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014291_2 "_clamp.formats.rgb565.linear_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014291, VkglTestCase_014291_1, VkglTestCase_014291_2);

#define VkglTestCase_014292_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014292_2 "_clamp.formats.rgb565.linear_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014292, VkglTestCase_014292_1, VkglTestCase_014292_2);

#define VkglTestCase_014293_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014293_2 "_clamp.formats.rgb565.gather_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014293, VkglTestCase_014293_1, VkglTestCase_014293_2);

#define VkglTestCase_014294_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014294_2 "_clamp.formats.rgb565.gather_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014294, VkglTestCase_014294_1, VkglTestCase_014294_2);
