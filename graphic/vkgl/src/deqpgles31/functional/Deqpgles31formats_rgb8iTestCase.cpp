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

#define VkglTestCase_014441_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014441_2 "_clamp.formats.rgb8i.nearest_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014441, VkglTestCase_014441_1, VkglTestCase_014441_2);

#define VkglTestCase_014442_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014442_2 "_clamp.formats.rgb8i.nearest_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014442, VkglTestCase_014442_1, VkglTestCase_014442_2);

#define VkglTestCase_014443_1 "dEQP-GLES31.functional.texture.borde"
#define VkglTestCase_014443_2 "r_clamp.formats.rgb8i.gather_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014443, VkglTestCase_014443_1, VkglTestCase_014443_2);

#define VkglTestCase_014444_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014444_2 "_clamp.formats.rgb8i.gather_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014444, VkglTestCase_014444_1, VkglTestCase_014444_2);
