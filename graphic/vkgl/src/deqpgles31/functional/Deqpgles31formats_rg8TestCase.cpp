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

#define VkglTestCase_014265_1 "dEQP-GLES31.functional.texture.borde"
#define VkglTestCase_014265_2 "r_clamp.formats.rg8.nearest_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014265, VkglTestCase_014265_1, VkglTestCase_014265_2);

#define VkglTestCase_014266_1 "dEQP-GLES31.functional.texture.borde"
#define VkglTestCase_014266_2 "r_clamp.formats.rg8.nearest_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014266, VkglTestCase_014266_1, VkglTestCase_014266_2);

#define VkglTestCase_014267_1 "dEQP-GLES31.functional.texture.bord"
#define VkglTestCase_014267_2 "er_clamp.formats.rg8.linear_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014267, VkglTestCase_014267_1, VkglTestCase_014267_2);

#define VkglTestCase_014268_1 "dEQP-GLES31.functional.texture.borde"
#define VkglTestCase_014268_2 "r_clamp.formats.rg8.linear_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014268, VkglTestCase_014268_1, VkglTestCase_014268_2);

#define VkglTestCase_014269_1 "dEQP-GLES31.functional.texture.bord"
#define VkglTestCase_014269_2 "er_clamp.formats.rg8.gather_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014269, VkglTestCase_014269_1, VkglTestCase_014269_2);

#define VkglTestCase_014270_1 "dEQP-GLES31.functional.texture.borde"
#define VkglTestCase_014270_2 "r_clamp.formats.rg8.gather_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014270, VkglTestCase_014270_1, VkglTestCase_014270_2);
