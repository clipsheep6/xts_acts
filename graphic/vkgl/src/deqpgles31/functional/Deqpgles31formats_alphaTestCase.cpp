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

#define VkglTestCase_014235_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014235_2 "_clamp.formats.alpha.nearest_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014235, VkglTestCase_014235_1, VkglTestCase_014235_2);

#define VkglTestCase_014236_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014236_2 "_clamp.formats.alpha.nearest_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014236, VkglTestCase_014236_1, VkglTestCase_014236_2);

#define VkglTestCase_014237_1 "dEQP-GLES31.functional.texture.borde"
#define VkglTestCase_014237_2 "r_clamp.formats.alpha.linear_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014237, VkglTestCase_014237_1, VkglTestCase_014237_2);

#define VkglTestCase_014238_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014238_2 "_clamp.formats.alpha.linear_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014238, VkglTestCase_014238_1, VkglTestCase_014238_2);

#define VkglTestCase_014239_1 "dEQP-GLES31.functional.texture.borde"
#define VkglTestCase_014239_2 "r_clamp.formats.alpha.gather_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014239, VkglTestCase_014239_1, VkglTestCase_014239_2);

#define VkglTestCase_014240_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014240_2 "_clamp.formats.alpha.gather_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014240, VkglTestCase_014240_1, VkglTestCase_014240_2);
