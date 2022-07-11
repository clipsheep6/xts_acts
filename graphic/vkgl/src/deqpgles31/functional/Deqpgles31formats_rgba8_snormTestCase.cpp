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

#define VkglTestCase_014313_1 "dEQP-GLES31.functional.texture.border_cl"
#define VkglTestCase_014313_2 "amp.formats.rgba8_snorm.nearest_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014313, VkglTestCase_014313_1, VkglTestCase_014313_2);

#define VkglTestCase_014314_1 "dEQP-GLES31.functional.texture.border_cl"
#define VkglTestCase_014314_2 "amp.formats.rgba8_snorm.nearest_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014314, VkglTestCase_014314_1, VkglTestCase_014314_2);

#define VkglTestCase_014315_1 "dEQP-GLES31.functional.texture.border_c"
#define VkglTestCase_014315_2 "lamp.formats.rgba8_snorm.linear_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014315, VkglTestCase_014315_1, VkglTestCase_014315_2);

#define VkglTestCase_014316_1 "dEQP-GLES31.functional.texture.border_cl"
#define VkglTestCase_014316_2 "amp.formats.rgba8_snorm.linear_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014316, VkglTestCase_014316_1, VkglTestCase_014316_2);

#define VkglTestCase_014317_1 "dEQP-GLES31.functional.texture.border_c"
#define VkglTestCase_014317_2 "lamp.formats.rgba8_snorm.gather_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014317, VkglTestCase_014317_1, VkglTestCase_014317_2);

#define VkglTestCase_014318_1 "dEQP-GLES31.functional.texture.border_cl"
#define VkglTestCase_014318_2 "amp.formats.rgba8_snorm.gather_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014318, VkglTestCase_014318_1, VkglTestCase_014318_2);
