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

#define VkglTestCase_014341_1 "dEQP-GLES31.functional.texture.borde"
#define VkglTestCase_014341_2 "r_clamp.formats.r16f.nearest_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014341, VkglTestCase_014341_1, VkglTestCase_014341_2);

#define VkglTestCase_014342_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014342_2 "_clamp.formats.r16f.nearest_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014342, VkglTestCase_014342_1, VkglTestCase_014342_2);

#define VkglTestCase_014343_1 "dEQP-GLES31.functional.texture.borde"
#define VkglTestCase_014343_2 "r_clamp.formats.r16f.linear_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014343, VkglTestCase_014343_1, VkglTestCase_014343_2);

#define VkglTestCase_014344_1 "dEQP-GLES31.functional.texture.borde"
#define VkglTestCase_014344_2 "r_clamp.formats.r16f.linear_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014344, VkglTestCase_014344_1, VkglTestCase_014344_2);

#define VkglTestCase_014345_1 "dEQP-GLES31.functional.texture.borde"
#define VkglTestCase_014345_2 "r_clamp.formats.r16f.gather_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014345, VkglTestCase_014345_1, VkglTestCase_014345_2);

#define VkglTestCase_014346_1 "dEQP-GLES31.functional.texture.borde"
#define VkglTestCase_014346_2 "r_clamp.formats.r16f.gather_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014346, VkglTestCase_014346_1, VkglTestCase_014346_2);
