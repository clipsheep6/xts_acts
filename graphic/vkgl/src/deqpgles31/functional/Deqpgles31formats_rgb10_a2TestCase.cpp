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

#define VkglTestCase_014319_1 "dEQP-GLES31.functional.texture.border_"
#define VkglTestCase_014319_2 "clamp.formats.rgb10_a2.nearest_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014319, VkglTestCase_014319_1, VkglTestCase_014319_2);

#define VkglTestCase_014320_1 "dEQP-GLES31.functional.texture.border_c"
#define VkglTestCase_014320_2 "lamp.formats.rgb10_a2.nearest_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014320, VkglTestCase_014320_1, VkglTestCase_014320_2);

#define VkglTestCase_014321_1 "dEQP-GLES31.functional.texture.border_"
#define VkglTestCase_014321_2 "clamp.formats.rgb10_a2.linear_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014321, VkglTestCase_014321_1, VkglTestCase_014321_2);

#define VkglTestCase_014322_1 "dEQP-GLES31.functional.texture.border_"
#define VkglTestCase_014322_2 "clamp.formats.rgb10_a2.linear_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014322, VkglTestCase_014322_1, VkglTestCase_014322_2);

#define VkglTestCase_014323_1 "dEQP-GLES31.functional.texture.border_"
#define VkglTestCase_014323_2 "clamp.formats.rgb10_a2.gather_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014323, VkglTestCase_014323_1, VkglTestCase_014323_2);

#define VkglTestCase_014324_1 "dEQP-GLES31.functional.texture.border_"
#define VkglTestCase_014324_2 "clamp.formats.rgb10_a2.gather_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014324, VkglTestCase_014324_1, VkglTestCase_014324_2);
