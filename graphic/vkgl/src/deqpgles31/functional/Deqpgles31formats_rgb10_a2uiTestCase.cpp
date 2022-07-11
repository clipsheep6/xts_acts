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

#define VkglTestCase_014325_1 "dEQP-GLES31.functional.texture.border_c"
#define VkglTestCase_014325_2 "lamp.formats.rgb10_a2ui.nearest_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014325, VkglTestCase_014325_1, VkglTestCase_014325_2);

#define VkglTestCase_014326_1 "dEQP-GLES31.functional.texture.border_cl"
#define VkglTestCase_014326_2 "amp.formats.rgb10_a2ui.nearest_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014326, VkglTestCase_014326_1, VkglTestCase_014326_2);

#define VkglTestCase_014327_1 "dEQP-GLES31.functional.texture.border_c"
#define VkglTestCase_014327_2 "lamp.formats.rgb10_a2ui.gather_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014327, VkglTestCase_014327_1, VkglTestCase_014327_2);

#define VkglTestCase_014328_1 "dEQP-GLES31.functional.texture.border_c"
#define VkglTestCase_014328_2 "lamp.formats.rgb10_a2ui.gather_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014328, VkglTestCase_014328_1, VkglTestCase_014328_2);
