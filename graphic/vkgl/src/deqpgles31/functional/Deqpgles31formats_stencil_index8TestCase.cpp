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

#define VkglTestCase_014501_1 "dEQP-GLES31.functional.texture.border_cla"
#define VkglTestCase_014501_2 "mp.formats.stencil_index8.nearest_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014501, VkglTestCase_014501_1, VkglTestCase_014501_2);

#define VkglTestCase_014502_1 "dEQP-GLES31.functional.texture.border_clam"
#define VkglTestCase_014502_2 "p.formats.stencil_index8.nearest_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014502, VkglTestCase_014502_1, VkglTestCase_014502_2);

#define VkglTestCase_014503_1 "dEQP-GLES31.functional.texture.border_cla"
#define VkglTestCase_014503_2 "mp.formats.stencil_index8.gather_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014503, VkglTestCase_014503_1, VkglTestCase_014503_2);

#define VkglTestCase_014504_1 "dEQP-GLES31.functional.texture.border_cla"
#define VkglTestCase_014504_2 "mp.formats.stencil_index8.gather_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014504, VkglTestCase_014504_1, VkglTestCase_014504_2);
