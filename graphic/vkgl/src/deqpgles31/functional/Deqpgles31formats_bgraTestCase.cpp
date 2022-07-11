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

#define VkglTestCase_014247_1 "dEQP-GLES31.functional.texture.borde"
#define VkglTestCase_014247_2 "r_clamp.formats.bgra.nearest_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014247, VkglTestCase_014247_1, VkglTestCase_014247_2);

#define VkglTestCase_014248_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014248_2 "_clamp.formats.bgra.nearest_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014248, VkglTestCase_014248_1, VkglTestCase_014248_2);

#define VkglTestCase_014249_1 "dEQP-GLES31.functional.texture.borde"
#define VkglTestCase_014249_2 "r_clamp.formats.bgra.linear_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014249, VkglTestCase_014249_1, VkglTestCase_014249_2);

#define VkglTestCase_014250_1 "dEQP-GLES31.functional.texture.borde"
#define VkglTestCase_014250_2 "r_clamp.formats.bgra.linear_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014250, VkglTestCase_014250_1, VkglTestCase_014250_2);

#define VkglTestCase_014251_1 "dEQP-GLES31.functional.texture.borde"
#define VkglTestCase_014251_2 "r_clamp.formats.bgra.gather_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014251, VkglTestCase_014251_1, VkglTestCase_014251_2);

#define VkglTestCase_014252_1 "dEQP-GLES31.functional.texture.borde"
#define VkglTestCase_014252_2 "r_clamp.formats.bgra.gather_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014252, VkglTestCase_014252_1, VkglTestCase_014252_2);
