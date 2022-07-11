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

#define VkglTestCase_014307_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014307_2 "_clamp.formats.rgba8.nearest_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014307, VkglTestCase_014307_1, VkglTestCase_014307_2);

#define VkglTestCase_014308_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014308_2 "_clamp.formats.rgba8.nearest_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014308, VkglTestCase_014308_1, VkglTestCase_014308_2);

#define VkglTestCase_014309_1 "dEQP-GLES31.functional.texture.borde"
#define VkglTestCase_014309_2 "r_clamp.formats.rgba8.linear_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014309, VkglTestCase_014309_1, VkglTestCase_014309_2);

#define VkglTestCase_014310_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014310_2 "_clamp.formats.rgba8.linear_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014310, VkglTestCase_014310_1, VkglTestCase_014310_2);

#define VkglTestCase_014311_1 "dEQP-GLES31.functional.texture.borde"
#define VkglTestCase_014311_2 "r_clamp.formats.rgba8.gather_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014311, VkglTestCase_014311_1, VkglTestCase_014311_2);

#define VkglTestCase_014312_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014312_2 "_clamp.formats.rgba8.gather_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014312, VkglTestCase_014312_1, VkglTestCase_014312_2);
